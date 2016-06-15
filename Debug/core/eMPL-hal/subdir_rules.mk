################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
core/eMPL-hal/eMPL_outputs.obj: ../core/eMPL-hal/eMPL_outputs.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib -me -O4 --opt_for_speed=0 --fp_mode=relaxed --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/include" --include_path="C:/Users/EinSoldiatGott/Documents/GitHub/CC2650_MPU9250_DMP_2" --include_path="C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/products/cc26xxware_2_23_02_16941" -g --define=ccs --define=SOLO_QUAT --define=CC2650 --define=USE_DMP --define=EMPL --define=EMPL_TARGET_STM32F4 --define=MPU6500 --display_error_number --diag_wrap=off --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="core/eMPL-hal/eMPL_outputs.pp" --obj_directory="core/eMPL-hal" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


