#include "empty.h"

#define TASKSTACKSIZE   600

static PIN_Handle ledPinHandle;
static PIN_State ledPinState;

Task_Struct task0Struct;
Char task0Stack[TASKSTACKSIZE];


PIN_Config ledPinTable[] = {
		Board_LED0 | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL | PIN_DRVSTR_MAX,
		Board_LED1 | PIN_GPIO_OUTPUT_EN | PIN_GPIO_LOW | PIN_PUSHPULL | PIN_DRVSTR_MAX,
		PIN_TERMINATE
};


static struct hal_s hal = {0};
unsigned char *mpl_key = (unsigned char*)"eMPL 5.1";
//static void uartCb(void);
//bool new_uart=FALSE;


void gyro_data_ready_cb(void) //INT MPU
{
	hal.new_gyro = 1;
	PIN_setOutputValue(ledPinHandle, Board_LED1,!PIN_getOutputValue(Board_LED1));
}

#ifndef SOLO_QUAT
static void uartCb(void){/* INT UART  */
	PIN_setOutputValue(ledPinHandle, Board_LED0,!PIN_getOutputValue(Board_LED0));
	new_uart=TRUE;
}
#endif

//Main
Void heartBeatFxn(UArg arg0, UArg arg1)
{

//	printt("Task:)\n"); flushh();
	Task_sleep(100);

	inv_error_t result;
	struct int_param_s int_param;

//	printt("UART\n"); flushh();
	if(ini_uart()){						//Inicia UART
		System_abort("Error UART.\n");
	}



#ifndef SOLO_QUAT
	printt("UART int\n"); flushh();
	reg_int_UART_cb(uartCb);
#endif

//	printt("MPU\n"); flushh();
	int_param.cb=gyro_data_ready_cb;

	result = mpu_init(&int_param);
	if (result) {
		MPL_LOGE("Could not initialize gyro.\n");
	}

	dmp_load_motion_driver_firmware();
	hal.dmp_features = DMP_FEATURE_6X_LP_QUAT | DMP_FEATURE_TAP | DMP_FEATURE_SEND_RAW_ACCEL | DMP_FEATURE_SEND_CAL_GYRO |DMP_FEATURE_GYRO_CAL;
	dmp_enable_feature(hal.dmp_features);
	dmp_set_fifo_rate(DEFAULT_MPU_HZ);
	mpu_set_dmp_state(1);


//	printt("Rutilde\n"); System_flush();


	while(1){
		if (hal.new_gyro) {
			unsigned char more;
			long quat[4];
			dmp_read_fifo_quat(quat, &more);
			eMPL_send_quat(quat);
			if (!more)
				hal.new_gyro = 0;
		}
	}
}

/*
 *  ======== main ========
 */
int main(void)
{
	Task_Params taskParams;

	Board_initGeneral();
	// Board_initI2C();
	Board_initUART();
	// Board_initWatchdog();


	/* Construct heartBeat Task  thread */
	Task_Params_init(&taskParams);
	taskParams.arg0 = 1000;
	taskParams.priority=7;
	taskParams.stackSize = TASKSTACKSIZE;
	taskParams.stack = &task0Stack;
	taskParams.instance->name = "heartBeat";
	Task_construct(&task0Struct, (Task_FuncPtr)heartBeatFxn, &taskParams, NULL);


	ledPinHandle = PIN_open(&ledPinState, ledPinTable);
	if(!ledPinHandle) {
		System_abort("Error pines\n");
	}


	if(!i2c_inicia()){
		System_abort("Error de i2c\n");
	}

	BIOS_start();
	return (0);
}
