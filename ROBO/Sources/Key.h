/*
 * Key.h
 *
 *  Created on: Apr 14, 2015
 *      Author: MiklPikl
 */

#ifndef KEY_H_
#define KEY_H_

#include "Platform.h"

#if PL_HAS_KEYS

typedef enum{
	#if PL_NUM_KEYS >= 1
		KEY_BTN1,	///*First Button
	#endif

	#if PL_NUM_KEYS >= 2
		KEY_BTN2,	///*Second Button
	#endif

	#if PL_NUM_KEYS >= 3
		KEY_BTN3,	///*Third Button
	#endif

	#if PL_NUM_KEYS >= 4
		KEY_BTN4,	///*Fourth Button
	#endif

	#if PL_NUM_KEYS >= 5
		KEY_BTN5,	///*Fifth Button
	#endif

	#if PL_NUM_KEYS >= 6
		KEY_BTN6,	///*Sixth Button
	#endif

	#if PL_NUM_KEYS >= 7
		KEY_BTN7,	///*Seventh Button
	#endif
} KEY_Buttons;

#if PL_NUM_KEYS >= 1

#include "KeyA.h"

	#define KeyA_Get()	(!(KeyA_GetVal()))
		///*Returns True if Button A is pressed
#else
	#define KeyA_Get()	FALSE
		///*Sets the default state of the button as FALSE
#endif

#if PL_NUM_KEYS >= 2

#include "KeyB.h"

	#define KeyB_Get()	(!(KeyB_GetVal()))
		///*Returns True if Button A is pressed
#else
	#define KeyB_Get()	FALSE
		///*Sets the default state of the button as FALSE
#endif

#if PL_NUM_KEYS >= 3

#include "KeyC.h"

	#define KeyC_Get()	(!(KeyC_GetVal()))
		///*Returns True if Button A is pressed
#else
	#define KeyC_Get()	FALSE
		///*Sets the default state of the button as FALSE
#endif

#if PL_NUM_KEYS >= 4

#include "KeyD.h"

	#define KeyD_Get()	(!(KeyD_GetVal()))
		///*Returns True if Button A is pressed
#else
	#define KeyD_Get()	FALSE
		///*Sets the default state of the button as FALSE
#endif

#if PL_NUM_KEYS >= 5

#include "KeyE.h"

	#define KeyE_Get()	(!(KeyE_GetVal()))
		///*Returns True if Button A is pressed
#else
	#define KeyE_Get()	FALSE
		///*Sets the default state of the button as FALSE
#endif

#if PL_NUM_KEYS >= 6

#include "KeyF.h"

	#define KeyF_Get()	(!(KeyF_GetVal()))
		///*Returns True if Button A is pressed
#else
	#define KeyF_Get()	FALSE
		///*Sets the default state of the button as FALSE
#endif

#if PL_NUM_KEYS >= 7

#include "KeyKEY.h"

	#define KeyKEY_Get()	(!(KeyKEY_GetVal()))
		///*Returns True if Button A is pressed
#else
	#define KeyKEY_Get()	FALSE
		///*Sets the default state of the button as FALSE
#endif

#if PL_HAS_KBI

/*
 * Function Name: KEY_OnInterrupt
 * Function Type: void
 * Parameter: KEY_Buttons button
 * Date: 14.04.2015
 *
 * Description: Calls the keyboard interrupt
 */

void KEY_OnInterrupt(KEY_Buttons button);

/*
 * Function Name: KEY_EnableInterrupts
 * Function Type: void
 * Date: 14.04.2015
 *
 * Description: This acknowledges any pending interrupt
 * 				and re-enables keyboard interrupts
 */

void KEY_EnableInterrupts(void);

/*
 * Function Name: Key_DisableInterrupts
 * Function Type: void
 * Date: 14.04.2015
 *
 * Description: This acknowledges pending interrupts
 * 				then re-enables keyboard interrupts
 */

void KEY_DisableInterrupts(void);

#endif

/*
 * Function Name: KEY_Init
 * Function Type: void
 * Date: 17.04.2015
 *
 * Description: Initializes the Keyboard interface
 */

void KEY_Init(void);

/*
 * Function Name: KEY_DeInit
 * Function Type: voi d
 * Date: 17.04.2015
 *
 * Description: De-initializes the Keyboard interface
 */
void KEY_DeInit(void);

#endif 		///*End of PL_HAS_KEYS

/*
 * Function Name: KEY_Scan
 * Function Type: void
 * Date: 17.04.2015
 *
 * Description: This scans the Key interface for inputs
 * 				and generates events
 */

void KEY_Scan(void);

/*
 * Function Name: KEY_Open
 * Function Type: void
 * Date: 17.04.2015
 *
 * Description: Accesses the Key hardware
 */

void KEY_Open(void);

/*
 * Function Name: KEY_Close
 * Function Type: void
 * Date: 17.04.2015
 *
 * Description: Closes access the Key hardware
 */

void KEY_Close(void);

#endif /* KEY_H_ */
