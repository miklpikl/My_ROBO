/*
 * Platform.h
 *
 *  Created on: Apr 2, 2015
 *      Author: MiklPikl
 */

#ifndef PLATFORM_H_
#define PLATFORM_H_

#include "PE_Types.h"
#include "PE_Error.h"

///* Supported Platforms
#define PL_IS_FRDM		(defined(PL_BOARD_IS_FRDM))
	///* This macro is defined through compiler options for the FRDM Board
#define PL_IS_ROBO		(defined(PL_BOARD_IS_ROBO))
	///* This macro is defined through compiler options for the FRDM Board

///*List of Supported Platforms
#define K22FXROBO 1 ///*Robo Board K22FX512
#define KL25ZFRDM 2 ///*FRDM Board KL25Z128

#define PL_TARGET_BOARD KL25ZFRDM ///*Sets the current platform

///* The following are possible modules on the supported platforms
#define PL_HAS_LED	(1)
	///*This is set to 1 to enable the LEDs, if not, set to 0



#if PL_IS_FRDM
	#define PL_NUM_LEDS (3)
		///*FRDM Board has an RGB LED
#endif


/*
 * Function Name: PL_INIT
 * Function Type: void
 * Date: 02.04.2015
 *
 * Description: This function will perform the
 * 				module initialization for the
 * 				activated platform.
 */

void PL_INIT(void);		///*Defined in Platform.c

/*
 * Function Name: PL_DEINIT
 * Function Type: void
 * Date: 02.04.2015
 *
 * Description: This function will perform
 * 				the deinitializaiton funcitons
 * 				for the activated platform.
 */

void PL_DEINIT(void);			///*Defined in Platform.c
#endif /* PLATFORM_H_ */
