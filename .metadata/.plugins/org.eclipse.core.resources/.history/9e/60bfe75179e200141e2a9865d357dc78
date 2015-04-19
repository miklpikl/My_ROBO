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

///* The following are possible modules on the supported platforms.
///* Each if construct will populate the macros based on which platform
///* is active.

#if PL_TARGET_BOARD == K22FXROBO
	#define PL_HAS_LED	(1)
	///*If 1, an initialization program is run. If 0, no LEDs are on the board
	#define PL_NUM_LEDS (2)
	///*The ROBO Board has 2 LEDS

	#define PL_HAS_RTOS (1)
	///*ROBO Board has RTOS Functionality

	#define PL_HAS_EVENTS (1)
	///*ROBO Board can use Events

	#define PL_HAS_TIMER (1)
	///*ROBO Board has an onboard timer

#elif PL_TARGET_BOARD == KL25ZFRDM
	#define PL_HAS_LED	(1)
	///*If 1, an initialization program is run. If 0, no LEDs are on the board

	#define PL_NUM_LEDS (3)
	///*FRDM Board has an RGB LED

	#define PL_HAS_RTOS (1)
	///*FRDM Board has RTOS Functionality

	#define PL_HAS_EVENTS (1)
	///*FRDM Board can use Events

	#define PL_NUM_KEYS (7)
	///*The joystick shield has 7 buttons

	#define PL_HAS_TIMER (1)
	///*FRDM Board has an onboard timer

#else
	#define PL_HAS_LED	(0)
	///*If 1, an initialization program is run. If 0, no LEDs are on the board

	#define PL_NUM_LEDS (0)
	///*Assumed that the unknown board has no LEDS

	#define PL_HAS_RTOS (0)
	///*Deactivates RTOS

	#define PL_HAS_EVENTS (0)
	///*Deactivates Events

	#define PL_NUM_KEYS (0)
	///*Deactivates Keys interface
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
