/*
 * i2c_rutinas.c
 *
 *  Created on: 1/04/2016
 *      Author: EinSoldiatGott
 * 		José Iván Esquivel Mendoza
 * 		Universidad Autónoma Metropolitana
 * 		Jesquivel@xanum.uam.mx

 *      Based on bspi2c from sensortag Project
 *      Removed low power and semaphores
 */

/* -----------------------------------------------------------------------------
*                           Mis includes
* ------------------------------------------------------------------------------
*/
#include "i2c_rutinas.h"
/* -----------------------------------------------------------------------------
*                           Cosas de I2C
* ------------------------------------------------------------------------------
*/

static volatile uint8_t slaveAddr;			//dispositivo a escribirle
static volatile uint8_t interface;			//I2c 0 o 1

static const I2CPinCfg pinCfg1 ={
		.pinSDA = Board_I2C0_SDA1,
		.pinSCL = Board_I2C0_SCL1}; 		//Config custom para interfaz 1

static 	I2C_Handle      i2cHandle;			//Instancia de handle
static 	I2C_Params      i2cParams;			//Instancia de parámetros
uint8_t buffer[32];



/*******************************************************************************
 * @fn          i2c_write
 * @brief       Escribe por i2c, adaptada para driver
 * @param       pbuf  - Puntero al Buffer
 * @param       nBits - Número de bits
 * @return      !ok
 */
bool i2c_write(uint8_t slave_addr, uint8_t reg_addr, uint8_t length, uint8_t *data)
{
	slaveAddr=slave_addr;
	uint8_t i;
	uint8_t *p = buffer;

	//reg y dato al buffer
	*p++ = reg_addr;
	for (i = 0; i < length; i++)
	{
		*p++ = *data++;
	}
	length++;

	I2C_Transaction masterTransaction;

	  masterTransaction.writeCount   = length;
	  masterTransaction.writeBuf     = buffer;
	  masterTransaction.readCount    = 0;
	  masterTransaction.readBuf      = NULL;
	  masterTransaction.slaveAddress = slaveAddr;
	  return !I2C_transfer(i2cHandle, &masterTransaction) == TRUE;

}


/*******************************************************************************
 * @fn          i2c_read
 * @brief       Lee por i2c, adaptada para driver
 * @param       pbuf  - Puntero al Buffer
 * @param       nBits - Número de bits
 * @return      !ok
 */
bool i2c_read(uint8_t slave_addr, uint8_t reg_addr,uint8_t length, uint8_t *data){
	slaveAddr=slave_addr;
	return !i2c_escribe_lee(&reg_addr,1,data,length);
}

/*******************************************************************************
 * @fn          i2c_escribe
 * @brief       Escribe por i2c
 * @param       pbuf  - Puntero al Buffer
 * @param       nBits - Número de bits
 * @return      ok
 */
bool i2c_escribe(uint8_t *pbuf, uint8_t nBits)
{
  I2C_Transaction masterTransaction;

  masterTransaction.writeCount   = nBits;
  masterTransaction.writeBuf     = pbuf;
  masterTransaction.readCount    = 0;
  masterTransaction.readBuf      = NULL;
  masterTransaction.slaveAddress = slaveAddr;
  return I2C_transfer(i2cHandle, &masterTransaction) == TRUE;
}


/*******************************************************************************
 * @fn          i2c_lee
 * @brief       Lee de i2c
 * @param       pbuf  - Puntero al Buffer
 * @param       nBits - Número de bits
 * @return      ok
 */
bool i2c_lee(uint8_t *pBuf, uint8_t nBytes)
{
  I2C_Transaction masterTransaction;

  masterTransaction.writeCount   = 0;
  masterTransaction.writeBuf     = NULL;
  masterTransaction.readCount    = nBytes;
  masterTransaction.readBuf      = pBuf;
  masterTransaction.slaveAddress = slaveAddr;

  return I2C_transfer(i2cHandle, &masterTransaction) == TRUE;
}

/*******************************************************************************
 * @fn          i2c_escribe_lee
 * @brief       Lee y escribe
 * @param       pBufTx  - 	Buffer Tx
 * @param       nBytesTx - 	Bytes Tx
 * @param       pBufRx  - 	Buffer Rx
 * @param       nBytesRx - 	Bytes Rx
 * @return      ok
 */
bool i2c_escribe_lee(uint8_t *pBufTx, uint8_t nBytesTx, uint8_t *pBufRx, uint8_t nBytesRx)
{
  I2C_Transaction masterTransaction;

  masterTransaction.writeCount   = nBytesTx;
  masterTransaction.writeBuf     = pBufTx;
  masterTransaction.readCount    = nBytesRx;
  masterTransaction.readBuf      = pBufRx;
  masterTransaction.slaveAddress = slaveAddr;

  return I2C_transfer(i2cHandle, &masterTransaction) == TRUE;
}


/*******************************************************************************
 * @fn          i2c_sel_interfas
 * @brief       Selecciona interfas
 * @param       Interfas - 0 o 1=MPU
 * @param       dir - Esclavo
 * @return      ok Siempre
 */
bool i2c_sel_interface(uint8_t Interface, uint8_t dir)
{

  slaveAddr = dir;				//Dispositivo esclavo
  if (Interface != interface)	//no es la actual ya seleccionada?
  {
    interface = Interface;
    I2C_close(i2cHandle);		//Cierra apertura actual, si la hay

    // Sets custom to NULL, selects I2C interface 0
    I2C_Params_init(&i2cParams);

    // Assign I2C data/clock pins according to selected I2C interface 1
    if (interface == 1)
    {
      //i2cParams.custom = (void*)&pinCfg1; //así lo hacen en el sensor tag
    i2cParams.custom = (uintptr_t)&pinCfg1;	//Modifico para suprimir el warning de tipo, pues espera un puntero uint
    }

    // Re-open RTOS driver with new bus pin assignment
    i2cHandle = I2C_open(Board_I2C, &i2cParams);
  }

  return true;
}


/*******************************************************************************
 * @fn          i2c_inicia
 * @brief       Inicia i2c
 */
bool i2c_inicia(void)
{
  I2C_init();
  I2C_Params_init(&i2cParams);
  i2cParams.bitRate = I2C_400kHz;
  i2cHandle = I2C_open(Board_I2C, &i2cParams);

  slaveAddr = 0xFF;
  interface = 0;

  if (i2cHandle == NULL)
  {
    return false;
  }
  return true;
}
