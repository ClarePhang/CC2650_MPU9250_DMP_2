################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
CC2650STK.obj: ../CC2650STK.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib -me -O4 --opt_for_speed=0 --fp_mode=relaxed --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/include" --include_path="C:/Users/EinSoldiatGott/Documents/GitHub/CC2650_MPU9250_DMP_2" --include_path="C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/products/cc26xxware_2_23_02_16941" -g --define=ccs --define=SOLO_QUAT --define=CC2650 --define=USE_DMP --define=EMPL --define=EMPL_TARGET_STM32F4 --define=MPU6500 --display_error_number --diag_wrap=off --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="CC2650STK.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

ccfg.obj: ../ccfg.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib -me -O4 --opt_for_speed=0 --fp_mode=relaxed --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/include" --include_path="C:/Users/EinSoldiatGott/Documents/GitHub/CC2650_MPU9250_DMP_2" --include_path="C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/products/cc26xxware_2_23_02_16941" -g --define=ccs --define=SOLO_QUAT --define=CC2650 --define=USE_DMP --define=EMPL --define=EMPL_TARGET_STM32F4 --define=MPU6500 --display_error_number --diag_wrap=off --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="ccfg.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

delays.obj: ../delays.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib -me -O4 --opt_for_speed=0 --fp_mode=relaxed --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/include" --include_path="C:/Users/EinSoldiatGott/Documents/GitHub/CC2650_MPU9250_DMP_2" --include_path="C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/products/cc26xxware_2_23_02_16941" -g --define=ccs --define=SOLO_QUAT --define=CC2650 --define=USE_DMP --define=EMPL --define=EMPL_TARGET_STM32F4 --define=MPU6500 --display_error_number --diag_wrap=off --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="delays.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

empty.obj: ../empty.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib -me -O4 --opt_for_speed=0 --fp_mode=relaxed --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/include" --include_path="C:/Users/EinSoldiatGott/Documents/GitHub/CC2650_MPU9250_DMP_2" --include_path="C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/products/cc26xxware_2_23_02_16941" -g --define=ccs --define=SOLO_QUAT --define=CC2650 --define=USE_DMP --define=EMPL --define=EMPL_TARGET_STM32F4 --define=MPU6500 --display_error_number --diag_wrap=off --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="empty.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/linker.cmd: ../empty.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"C:/ti/xdctools_3_32_00_06_core/xs" --xdcpath="C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/packages;C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/products/tidrivers_cc13xx_cc26xx_2_16_01_13/packages;C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/products/bios_6_45_02_31/packages;C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/products/uia_2_00_05_50/packages;C:/ti/ccsv6/ccs_base;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M3 -p ti.platforms.simplelink:CC2650F128 -r release -c "C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS" --compileOptions "-mv7M3 --code_state=16 --float_support=vfplib -me -O4 --opt_for_speed=0 --fp_mode=relaxed --include_path=\"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/include\" --include_path=\"C:/Users/EinSoldiatGott/Documents/GitHub/CC2650_MPU9250_DMP_2\" --include_path=\"C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/products/cc26xxware_2_23_02_16941\" -g --define=ccs --define=SOLO_QUAT --define=CC2650 --define=USE_DMP --define=EMPL --define=EMPL_TARGET_STM32F4 --define=MPU6500 --display_error_number --diag_wrap=off --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --abi=eabi  " "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/compiler.opt: | configPkg/linker.cmd
configPkg/: | configPkg/linker.cmd

i2c_rutinas.obj: ../i2c_rutinas.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib -me -O4 --opt_for_speed=0 --fp_mode=relaxed --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/include" --include_path="C:/Users/EinSoldiatGott/Documents/GitHub/CC2650_MPU9250_DMP_2" --include_path="C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/products/cc26xxware_2_23_02_16941" -g --define=ccs --define=SOLO_QUAT --define=CC2650 --define=USE_DMP --define=EMPL --define=EMPL_TARGET_STM32F4 --define=MPU6500 --display_error_number --diag_wrap=off --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="i2c_rutinas.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

prints.obj: ../prints.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib -me -O4 --opt_for_speed=0 --fp_mode=relaxed --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_16.3.0.STS/include" --include_path="C:/Users/EinSoldiatGott/Documents/GitHub/CC2650_MPU9250_DMP_2" --include_path="C:/ti/tirtos_cc13xx_cc26xx_2_16_01_14/products/cc26xxware_2_23_02_16941" -g --define=ccs --define=SOLO_QUAT --define=CC2650 --define=USE_DMP --define=EMPL --define=EMPL_TARGET_STM32F4 --define=MPU6500 --display_error_number --diag_wrap=off --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="prints.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


