###########################################################################
## Makefile generated for component 'APS_MoodsDetector0'. 
## 
## Makefile     : APS_MoodsDetector0.mk
## Generated on : Mon Jul 15 23:58:40 2024
## Final product: ./APS_MoodsDetector0.exe
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# MODELREF_LINK_RSPFILE   Linker command listing model reference link objects
# CMD_FILE                Command file

PRODUCT_NAME              = APS_MoodsDetector0
MAKEFILE                  = APS_MoodsDetector0.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2022b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2022b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = D:/course/MBD/system_modeling_7/labs/Electronic_Throttle_Control
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ../..
MODELREF_LINK_RSPFILE     = APS_MoodsDetector0_ref.rsp
CMD_FILE                  = APS_MoodsDetector0.rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          LCC-win64 v2.4.1 | gmake (64-bit Windows)
# Supported Version(s):    2.4.1
# ToolchainInfo Version:   2022b
# Specification Revision:  1.0
# 

#-----------
# MACROS
#-----------

SHELL              = cmd
LCC_ROOT           = $(MATLAB_ROOT)/sys/lcc64/lcc64
LCC_BUILDLIB       = $(LCC_ROOT)/bin/buildlib
LCC_LIB            = $(LCC_ROOT)/lib64
MW_EXTERNLIB_DIR   = $(MATLAB_ROOT)/extern/lib/win64/microsoft
MW_LIB_DIR         = $(MATLAB_ROOT)/lib/win64
TOOLCHAIN_INCLUDES = -I$(LCC_ROOT)/include64

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Lcc-win64 C Compiler
CC_PATH = $(LCC_ROOT)/bin
CC = "$(CC_PATH)/lcc64"

# Linker: Lcc-win64 Linker
LD_PATH = $(LCC_ROOT)/bin
LD = "$(LD_PATH)/lcclnk64"

# Archiver: Lcc-win64 Archiver
AR_PATH = $(LCC_ROOT)/bin
AR = "$(AR_PATH)/lcclib64"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%\bin\win64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -Fo
LDDEBUG             =
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = /out:
MEX_DEBUG           = -g
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              =
CFLAGS               = -c -w -noregistrylookup -nodeclspec -I$(LCC_ROOT)/include64
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -s -L$(LCC_LIB) $(LDFLAGS_ADDITIONAL)
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -dll -entry LibMain -s -L$(LCC_LIB) $(LDFLAGS_ADDITIONAL) $(DEF_FILE)



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = ./APS_MoodsDetector0.exe
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/APS_MoodsDetector0_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(START_DIR)/APS_MoodsDetector0_ert_rtw/sil -I$(START_DIR)/APS_MoodsDetector0_ert_rtw/coderassumptions -I$(MATLAB_ROOT)/toolbox/rtw/targets/pil/c -I$(MATLAB_ROOT)/extern/include/coder/connectivity/XILTgtAppSvc -I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils -I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src -I$(MATLAB_ROOT)/extern/include/coder/connectivity/CoderAssumpTgtAppSvc

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DCODER_ASSUMPTIONS_ENABLED=1 -DXIL_SIGNAL_HANDLER=1
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=0 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=0 -DPORTABLE_WORDSIZES -DRTIOSTREAM_RX_BUFFER_BYTE_SIZE=50000 -DRTIOSTREAM_TX_BUFFER_BYTE_SIZE=50000 -DMEM_UNIT_BYTES=1 -DMemUnit_T=uint8_T
DEFINES_STANDARD = -DMODEL=APS_MoodsDetector0 -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/APS_MoodsDetector0_ert_rtw/sil/xil_interface.c $(START_DIR)/APS_MoodsDetector0_ert_rtw/sil/sil_main.c $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/rtiostream_tcpip.c $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/xil_interface_lib.c $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/xil_data_stream.c $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/xil_services.c $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/xilcomms_rtiostream.c $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/xil_rtiostream.c $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/rtiostream_utils.c $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/target_io.c $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/coder_assumptions_app.c $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/coder_assumptions_data_stream.c $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/coder_assumptions_rtiostream.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = xil_interface.obj sil_main.obj rtiostream_tcpip.obj xil_interface_lib.obj xil_data_stream.obj xil_services.obj xilcomms_rtiostream.obj xil_rtiostream.obj rtiostream_utils.obj target_io.obj coder_assumptions_app.obj coder_assumptions_data_stream.obj coder_assumptions_rtiostream.obj

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

MODELREF_LIBS = hostobj/APS_MoodsDetector0.obj

LIBS = $(START_DIR)/APS_MoodsDetector0_ert_rtw/coderassumptions/pwslib/APS_MoodsDetector0_ca.lib $(MATLAB_ROOT)/sys/lcc64/lcc64/lib64/wsock32.lib

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


download : $(PRODUCT)


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(MODELREF_LIBS) $(LIBS)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -o $(PRODUCT) @$(CMD_FILE) @$(MODELREF_LINK_RSPFILE) $(subst /,\,$(LIBS)) $(subst /,\,$(SYSTEM_LIBS)) $(subst /,\,$(TOOLCHAIN_LIBS))
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.obj : %.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


xil_interface.obj : $(START_DIR)/APS_MoodsDetector0_ert_rtw/sil/xil_interface.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


sil_main.obj : $(START_DIR)/APS_MoodsDetector0_ert_rtw/sil/sil_main.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


rtiostream_tcpip.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/rtiostream_tcpip.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


xil_interface_lib.obj : $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/xil_interface_lib.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


xil_data_stream.obj : $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/xil_data_stream.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


xil_services.obj : $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/xil_services.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


xilcomms_rtiostream.obj : $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/xilcomms_rtiostream.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


xil_rtiostream.obj : $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/xil_rtiostream.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


rtiostream_utils.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/rtiostream_utils.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


target_io.obj : $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/target_io.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


coder_assumptions_app.obj : $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/coder_assumptions_app.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


coder_assumptions_data_stream.obj : $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/coder_assumptions_data_stream.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


coder_assumptions_rtiostream.obj : $(MATLAB_ROOT)/toolbox/rtw/targets/pil/c/coder_assumptions_rtiostream.c
	$(CC) $(CFLAGS) -Fo"$@" $(subst /,\,"$<")


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


