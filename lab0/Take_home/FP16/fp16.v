module fp16 #(
    parameter DATA_WIDTH = 16,
    parameter INST_WIDTH = 2, 
    parameter EXP_W = 5, 
    parameter FRAC_W = 10, 
    parameter BIAS = 15
)(
    input                   i_clk,
    input                   i_rst_n,
    input  [DATA_WIDTH-1:0] i_data_a,
    input  [DATA_WIDTH-1:0] i_data_b,
    input  [INST_WIDTH-1:0] i_inst,
    input                   i_valid,
    output reg [DATA_WIDTH-1:0] o_data,
    output reg                  o_valid
);

    localparam SIG_W = FRAC_W + 1; //significand width
    localparam ADD_W = FRAC_W + SIG_W; //extended significand for addition to not lose rounding bits
    localparam PROD_W = 2*SIG_W; //Product width parameterized
    localparam DIV_W = SIG_W + (2*FRAC_W); //To store extra 7 bits of precision
    localparam QUOT_W = SIG_W + FRAC_W; //Wquotient. (7 bits smaller than dividedn)
    localparam SHIFT_W = $clog2(ADD_W+ 2); //auto calculaate shift position

    // i_inst: 0 = add, 1 = mul, 2 = div
    // TODO: Implement the BF16 unit
    reg sign_a, sign_b, calc_sign;
    reg  [EXP_W-1:0]   exponent_a, exponent_b, calcexponent;
    reg  [SIG_W-1:0]   significand_a, significand_b;
    reg [SIG_W:0] calcresult; //+1 bit
    reg found_one;
    reg [SHIFT_W - 1:0] sub_shift_pos;
    reg [DATA_WIDTH-1:0] combined_out;
    reg [PROD_W - 1:0] product;
    reg [DIV_W - 1:0] dividend;
    reg [QUOT_W - 1:0] quotient;
    reg [ADD_W - 1:0] sig_a_add, sig_b_add;
    reg [ADD_W : 0] sum;
    reg round_up_add, round_up_mul, round_up_div;
    integer i;
  

    always @(*) begin
        sign_a = i_data_a[DATA_WIDTH - 1];
        sign_b = i_data_b[DATA_WIDTH - 1];
        
        exponent_a = i_data_a[DATA_WIDTH - 2 : FRAC_W];
        exponent_b = i_data_b[DATA_WIDTH - 2 : FRAC_W];
        //since this lab lets us know there are no denormal numbers..
        //this is to not add the leading one later on incase the input is 0. 
        significand_a = (exponent_a == 0) ? {SIG_W{1'b0}} : {1'b1, i_data_a[FRAC_W-1:0]};
        significand_b = (exponent_b == 0) ? {SIG_W{1'b0}} : {1'b1, i_data_b[FRAC_W-1:0]};

        //SET ALL TO 0 TO PREVENT LATCH INFERENCE
        
        calcexponent  = {EXP_W{1'b0}};
        calcresult    = {(SIG_W+1){1'b0}};
        calc_sign     = 1'b0;
        product       = {PROD_W{1'b0}};
        dividend      = {DIV_W{1'b0}};
        quotient      = {QUOT_W{1'b0}};
        combined_out  = {DATA_WIDTH{1'b0}};
        round_up_mul  = 1'b0;
        round_up_add  = 1'b0;
        round_up_div  = 1'b0;
        sig_a_add     = {ADD_W{1'b0}};
        sig_b_add     = {ADD_W{1'b0}};
        sum           = {(ADD_W + 1){1'b0}};
        found_one     = 1'b0;
        sub_shift_pos = {SHIFT_W{1'b0}};
        
        //specific logic for each kind of operations
        case(i_inst)
            2'd0: begin //addition
                sig_a_add = {significand_a, {FRAC_W{1'b0}}};
                sig_b_add = {significand_b, {FRAC_W{1'b0}}};
                if (exponent_a < exponent_b) begin
                    sig_a_add = sig_a_add >> (exponent_b - exponent_a);
                    calcexponent = exponent_b;
                end else if (exponent_a > exponent_b) begin
                    sig_b_add = sig_b_add >> (exponent_a - exponent_b);
                    calcexponent = exponent_a;
                end else begin //were stopping this from becoming a latch
                    calcexponent = exponent_a;
                end
                //now the acc addition/subtraction of the significands
                if (sign_a == sign_b) begin
                    sum = sig_a_add + sig_b_add;
                    calc_sign = sign_a;
                end else begin
                    if (sig_a_add > sig_b_add) begin
                        sum = sig_a_add - sig_b_add;
                        calc_sign = sign_a;
                    end else if (sig_a_add < sig_b_add) begin
                        sum = sig_b_add - sig_a_add;
                        calc_sign = sign_b;
                    end else begin //both the significands are equal and signs are diff
                        sum = 0;
                        calc_sign = 1'b0;
                    end
                end

                
                //normalization
                // add => extra leading one
                if (sum == 0) begin
                    calc_sign = 1'b0;
                    calcexponent = {EXP_W{1'b0}};
                end else if (sum[ADD_W]) begin
                    sum = sum >> 1;
                    calcexponent = calcexponent + 1;
                end else begin //perhaps subtraction? need to find leading one
                    for (i = ADD_W - 1; i >= 0 ; i = i -1) begin
                        if (sum[i] && !found_one) begin
                            found_one = 1'b1;
                            sub_shift_pos = ADD_W - 1 - i;
                        end
                    end
                    sum = sum << sub_shift_pos;
                    calcexponent = calcexponent - sub_shift_pos;
                end

                round_up_add = sum[FRAC_W-1] && (sum[FRAC_W-2] || (|sum[FRAC_W-3:0]) || sum[FRAC_W]);
                calcresult = {1'b0, sum[ADD_W - 1: FRAC_W]};

                if (round_up_add) begin
                    calcresult = calcresult + 1;
                end

                if (calcresult[SIG_W]) begin
                    calcresult = calcresult >> 1;
                    calcexponent = calcexponent + 1;
                end

            end
            2'd1: begin
                //sign calc
                calc_sign = sign_a ^ sign_b;
                calcexponent = exponent_a + exponent_b - BIAS;
                product = significand_a * significand_b;
                //product normalization
                //grs rounding
                
                if (product[PROD_W - 1]) begin
                    round_up_mul = product[FRAC_W] &&
                                   (product[FRAC_W-1] || (|product[FRAC_W-2:0]) || product[FRAC_W+1]);
                    calcresult   = {1'b0, product[PROD_W-1 : PROD_W-SIG_W]}; //adding padding where carry would have been in add
                    calcexponent = calcexponent + 1;
                end else begin
                    round_up_mul = product[FRAC_W-1] && (product[FRAC_W-2] || (|product[FRAC_W-3:0]) || product[FRAC_W]);
                    calcresult   = {1'b0, product[PROD_W-2 : PROD_W-1-SIG_W]};
                end
                if  (round_up_mul) begin
                    calcresult = calcresult + 1;
                end
                //checking if this caused overflow and re shifiting if it did. 
                if (calcresult[SIG_W]) begin
                    calcresult = calcresult >> 1;
                    calcexponent = calcexponent + 1;
                end
            end
            2'd2: begin
                calc_sign = sign_a ^ sign_b;
                calcexponent = exponent_a - exponent_b + BIAS;
                dividend = {significand_a, {(2*FRAC_W){1'b0}}};

                quotient = (dividend) / significand_b;

                
                if (!quotient[QUOT_W - 1]) begin
                    calcexponent = calcexponent - 1;
                    quotient = quotient << 1;
                end
                round_up_div = quotient[FRAC_W-1] && (quotient[FRAC_W-2] || (|quotient[FRAC_W-3:0]) || quotient[FRAC_W]);
                calcresult   = {1'b0, quotient[QUOT_W-1 : QUOT_W-SIG_W]};
                if (round_up_div) begin
                    calcresult = calcresult + 1;
                end
                if (calcresult[SIG_W]) begin
                    calcresult = calcresult >> 1;
                    calcexponent = calcexponent + 1;
                end


            end

        endcase
        //concatenation
        combined_out = {calc_sign, calcexponent, calcresult[FRAC_W - 1:0]}; //remove the added one to significand
        
    end

    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            o_data <= {DATA_WIDTH{1'b0}};
            o_valid <= 1'b0;
        end else begin
            if (i_valid) begin
                o_data <= combined_out;
                o_valid <= 1'b1;
            end else begin
                o_valid <= 1'b0;
            end
        end
    end
endmodule
