/*
 * i2c_rutinas.h
 *
 *  Created on: 21/04/2016
 *      Author: EinSoldiatGott
 */

#ifndef I2C_RUTINAS_H_
#define I2C_RUTINAS_H_

#include "Board.h"
#include "stdbool.h"
#include "stdint.h"
#include <ti/drivers/I2C.h>


/* -----------------------------------------------------------------------------
*                           Definiciones de I2C
* ------------------------------------------------------------------------------
*/
typedef struct I2CPinCfg {				//Tipo para enviar en la config custom del i2c
    uint8_t pinSDA;
    uint8_t pinSCL;
} I2CPinCfg;


/* -----------------------------------------------------------------------------
*                           Funciones
* ------------------------------------------------------------------------------
*/

bool i2c_escribe(uint8_t *pbuf, uint8_t nBits);
bool i2c_lee(uint8_t *pBuf, uint8_t nBytes);
bool i2c_escribe_lee(uint8_t *pBufTx, uint8_t nBytesTx, uint8_t *pBufRx, uint8_t nBytesRx);
bool i2c_sel_interface(uint8_t Interface, uint8_t dir);
bool i2c_inicia(void);
bool i2c_write(uint8_t slave_addr, uint8_t reg_addr, uint8_t length, uint8_t *data);
bool i2c_read(uint8_t slave_addr, uint8_t reg_addr,uint8_t length, uint8_t *data);


#endif /* I2C_RUTINAS_H_ */
