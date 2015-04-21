/*
 * RTOS.h
 *
 *  Created on: Apr 12, 2015
 *      Author: MiklPikl
 */

#ifndef RTOS_H_
#define RTOS_H_

#include "Platform.h"

/*
 * Function Name: RTOS_Run
 * Function Type: void
 * Date: 12.04.2015
 *
 * Description: This function will contain all the running
 * 				parts of the RTOS system.
 */

void RTOS_Run(void);

/*
 * Function Name: RTOS_Init
 * Function Type: void
 * Date: 12.04.2015
 *
 * Description: This function initializes the RTOS system.
 */

void RTOS_Init(void);

/*
 * Function Name: RTOS_DeInit
 * Function Type: void
 * Date: 12.04.2015
 *
 * Description: This function will be blank for now,
 * 				but contains deinitialization code for
 * 				the RTOS.
 */

void RTOS_DeInit(void);




#endif /* RTOS_H_ */
