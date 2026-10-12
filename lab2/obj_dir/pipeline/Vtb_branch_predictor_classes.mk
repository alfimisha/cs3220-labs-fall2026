# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_branch_predictor.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_branch_predictor \
	Vtb_branch_predictor___024root__DepSet_hbdb6dafd__0 \
	Vtb_branch_predictor___024root__DepSet_h2173bc74__0 \
	Vtb_branch_predictor_pipeline__DepSet_h74e92aa7__0 \
	Vtb_branch_predictor_AGEX_STAGE__DepSet_h21fe9ac0__0 \
	Vtb_branch_predictor_WB_STAGE__DepSet_h9e2c922f__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_branch_predictor__ConstPool_0 \
	Vtb_branch_predictor___024root__Slow \
	Vtb_branch_predictor___024root__DepSet_hbdb6dafd__0__Slow \
	Vtb_branch_predictor___024root__DepSet_h2173bc74__0__Slow \
	Vtb_branch_predictor_tb_branch_predictor__Slow \
	Vtb_branch_predictor_tb_branch_predictor__DepSet_h5bde6494__0__Slow \
	Vtb_branch_predictor_pipeline__Slow \
	Vtb_branch_predictor_pipeline__DepSet_h5a268c2a__0__Slow \
	Vtb_branch_predictor_AGEX_STAGE__Slow \
	Vtb_branch_predictor_AGEX_STAGE__DepSet_h498954b9__0__Slow \
	Vtb_branch_predictor_WB_STAGE__Slow \
	Vtb_branch_predictor_WB_STAGE__DepSet_h6f880937__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_branch_predictor__Dpi \
	Vtb_branch_predictor__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_branch_predictor__Syms \
	Vtb_branch_predictor__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
