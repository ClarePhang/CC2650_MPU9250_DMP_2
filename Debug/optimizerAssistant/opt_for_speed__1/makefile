################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.7

GEN_OPTS__FLAG := --cmd_file="configPkg/compiler.opt"
GEN_CMDS__FLAG := -l"configPkg/linker.cmd"

ORDERED_OBJS += \
"./CC2650STK.obj" \
"./ccfg.obj" \
"./delays.obj" \
"./empty.obj" \
"./i2c_rutinas.obj" \
"./prints.obj" \
"./core/mllite/data_builder.obj" \
"./core/mllite/hal_outputs.obj" \
"./core/mllite/message_layer.obj" \
"./core/mllite/ml_math_func.obj" \
"./core/mllite/mlmath.obj" \
"./core/mllite/mpl.obj" \
"./core/mllite/results_holder.obj" \
"./core/mllite/start_manager.obj" \
"./core/mllite/storage_manager.obj" \
"./core/eMPL-hal/eMPL_outputs.obj" \
"./core/driver/outputs/packet.obj" \
"./core/driver/eMPL/inv_mpu.obj" \
"./core/driver/eMPL/inv_mpu_dmp_motion_driver.obj" \
"../CC2650STK.cmd" \
$(GEN_CMDS__FLAG) \
-l"libc.a" \
-l"C:\Users\Ein\Documents\GitHub\CC2650_MPU9250_DMP_2\core\mpl\libmpllib.a" \
-l"C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/products/cc26xxware_2_23_02_16941/driverlib/bin/ccs/driverlib.lib" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include core/mpl/subdir_vars.mk
-include core/mllite/subdir_vars.mk
-include core/eMPL-hal/subdir_vars.mk
-include core/driver/outputs/subdir_vars.mk
-include core/driver/eMPL/subdir_vars.mk
-include subdir_rules.mk
-include core/mpl/subdir_rules.mk
-include core/mllite/subdir_rules.mk
-include core/eMPL-hal/subdir_rules.mk
-include core/driver/outputs/subdir_rules.mk
-include core/driver/eMPL/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
CC2650_MPU9250_DMP_2.out \

EXE_OUTPUTS__QUOTED += \
"CC2650_MPU9250_DMP_2.out" \

BIN_OUTPUTS += \
CC2650_MPU9250_DMP_2.hex \

BIN_OUTPUTS__QUOTED += \
"CC2650_MPU9250_DMP_2.hex" \


# All Target
all: CC2650_MPU9250_DMP_2.out

# Tool invocations
CC2650_MPU9250_DMP_2.out: $(OBJS) $(CMD_SRCS) $(A_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.7/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib --abi=eabi -me -O4 --fp_mode=strict --opt_for_speed=1 -g --define=ccs --define=SOLO_QUAT --define=CC2650 --define=USE_DMP --define=EMPL --define=EMPL_TARGET_STM32F4 --define=MPU9250 --diag_wrap=off --display_error_number --diag_warning=225 --diag_warning=255 --gen_func_subsections=on -z -m"CC2650_MPU9250_DMP_2.map" --heap_size=0 --stack_size=256 -i"C:/Users/Ein/Documents/GitHub/CC2650_MPU9250_DMP_2/core/driver/eMPL" -i"C:/Users/Ein/Documents/GitHub/CC2650_MPU9250_DMP_2/core/mpl" -i"C:/Users/Ein/Documents/GitHub/CC2650_MPU9250_DMP_2/core/eMPL-hal" -i"C:/Users/Ein/Documents/GitHub/CC2650_MPU9250_DMP_2/core/mllite" -i"C:/Users/Ein/Documents/GitHub/CC2650_MPU9250_DMP_2/core/driver/include" -i"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.7/lib" -i"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.7/include" --reread_libs --display_error_number --diag_wrap=off --warn_sections --xml_link_info="CC2650_MPU9250_DMP_2_linkInfo.xml" --rom_model -o "CC2650_MPU9250_DMP_2.out" $(ORDERED_OBJS) $(A_SRCS)
	@echo 'Finished building target: $@'
	@echo ' '

CC2650_MPU9250_DMP_2.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: ARM Hex Utility'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.7/bin/armhex" --memwidth=8 --romwidth=8 --intel -o "CC2650_MPU9250_DMP_2.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(GEN_MISC_FILES__QUOTED)$(EXE_OUTPUTS__QUOTED)$(GEN_FILES__QUOTED)$(BIN_OUTPUTS__QUOTED)$(GEN_OPTS__QUOTED)$(GEN_CMDS__QUOTED)
	-$(RMDIR) $(GEN_MISC_DIRS__QUOTED)
	-$(RM) "CC2650STK.pp" "ccfg.pp" "delays.pp" "empty.pp" "i2c_rutinas.pp" "prints.pp" "core\mllite\data_builder.pp" "core\mllite\hal_outputs.pp" "core\mllite\message_layer.pp" "core\mllite\ml_math_func.pp" "core\mllite\mlmath.pp" "core\mllite\mpl.pp" "core\mllite\results_holder.pp" "core\mllite\start_manager.pp" "core\mllite\storage_manager.pp" "core\eMPL-hal\eMPL_outputs.pp" "core\driver\outputs\packet.pp" "core\driver\eMPL\inv_mpu.pp" "core\driver\eMPL\inv_mpu_dmp_motion_driver.pp" 
	-$(RM) "CC2650STK.obj" "ccfg.obj" "delays.obj" "empty.obj" "i2c_rutinas.obj" "prints.obj" "core\mllite\data_builder.obj" "core\mllite\hal_outputs.obj" "core\mllite\message_layer.obj" "core\mllite\ml_math_func.obj" "core\mllite\mlmath.obj" "core\mllite\mpl.obj" "core\mllite\results_holder.obj" "core\mllite\start_manager.obj" "core\mllite\storage_manager.obj" "core\eMPL-hal\eMPL_outputs.obj" "core\driver\outputs\packet.obj" "core\driver\eMPL\inv_mpu.obj" "core\driver\eMPL\inv_mpu_dmp_motion_driver.obj" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

