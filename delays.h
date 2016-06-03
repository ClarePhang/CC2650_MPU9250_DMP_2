/*
 * delays.h
 *
 *  Created on: 21/04/2016
 *      Author: EinSoldiatGott
 */

#ifndef DELAYS_H_
#define DELAYS_H_

#include "Board.h"
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Clock.h>

#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>


#define delay_ms(i) Task_sleep( ((i) * 1000) / Clock_tickPeriod )

void get_ms(unsigned long * timestamp);

#endif /* DELAYS_H_ */
