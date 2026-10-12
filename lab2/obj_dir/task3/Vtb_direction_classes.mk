# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_direction.mk for the caller.

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
	Vtb_direction \
	Vtb_direction___024root__DepSet_h9ac53982__0 \
	Vtb_direction___024root__DepSet_h385f425e__0 \
	Vtb_direction_pipeline__DepSet_hec9c6f59__0 \
	Vtb_direction_AGEX_STAGE__DepSet_h89373f99__0 \
	Vtb_direction_WB_STAGE__DepSet_h27b0b150__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_direction__ConstPool_0 \
	Vtb_direction___024root__Slow \
	Vtb_direction___024root__DepSet_h9ac53982__0__Slow \
	Vtb_direction___024root__DepSet_h385f425e__0__Slow \
	Vtb_direction_tb_direction__Slow \
	Vtb_direction_tb_direction__DepSet_h62d30e98__0__Slow \
	Vtb_direction_pipeline__Slow \
	Vtb_direction_pipeline__DepSet_h4e088c95__0__Slow \
	Vtb_direction___024unit__Slow \
	Vtb_direction___024unit__DepSet_hd3b3d7c8__0__Slow \
	Vtb_direction_AGEX_STAGE__Slow \
	Vtb_direction_AGEX_STAGE__DepSet_h9d06d3de__0__Slow \
	Vtb_direction_WB_STAGE__Slow \
	Vtb_direction_WB_STAGE__DepSet_h42a4be7f__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb_direction__Dpi \
	Vtb_direction__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_direction__Syms \
	Vtb_direction__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
