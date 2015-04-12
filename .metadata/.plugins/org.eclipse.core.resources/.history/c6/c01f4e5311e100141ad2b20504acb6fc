/*
 * LED.h
 *
 *  Created on: Apr 2, 2015
 *      Author: MiklPikl
 */

#ifndef LED_H_
#define LED_H_

#include "Platform.h"
#include "PE_Types.h"
#include "PE_Error.h"

///* Define the Number of LED

#if PL_TARGET_BOARD == K22FXROBO
	#define PL_NUM_LEDS 2
#elif PL_TARGET_BOARD == KL25ZFRDM
	#define PL_NUM_LEDS 3
#else
	#error "Unsupported Platform!"
#endif

#if PL_NUM_LEDS >= 1
	#include "LED1.h"

	#define LED1_ON			LED1_On()
	#define LED1_OFF		LED1_Off()
	#define LED1_TOGGLE		LED1_Neg()
	#define LED1_GET		LED1_Get()
	#define LED1_PUT(val)	LED1_Put(val)
	#define	LED1_INIT		LED1_Init()
	#define LED1_DEINIT		///*Do Nothing

#if PL_NUM_LEDS >= 2
	#include "LED2.h"

	#define LED2_ON			LED2_On()
	#define LED2_OFF		LED2_Off()
	#define LED2_TOGGLE		LED2_Neg()
	#define LED2_GET		LED2_Get()
	#define LED2_PUT(val)	LED2_Put(val)
	#define	LED2_INIT		LED2_Init()
	#define LED2_DEINIT		///*Do Nothing
#endif

#if PL_NUM_LEDS >= 3
	#include "LED3.h"

	#define LED3_ON			LED3_On()
	#define LED3_OFF		LED3_Off()
	#define LED3_TOGGLE		LED3_Neg()
	#define LED3_GET		LED3_Get()
	#define LED3_PUT(val)	LED3_Put(val)
	#define	LED3_INIT		LED3_Init()
	#define LED3_DEINIT		///*Do Nothing
#endif

#else

	#define LED1_ON			///*Do Nothing
	#define LED1_OFF		///*Do Nothing
	#define LED1_TOGGLE		///*Do Nothing
	#define LED1_GET		///*Do Nothing
	#define LED1_PUT(val)	///*Do Nothing
	#define	LED1_INIT		///*Do Nothing
	#define LED1_DEINIT		///*Do Nothing

	#define LED2_ON			///*Do Nothing
	#define LED2_OFF		///*Do Nothing
	#define LED2_TOGGLE		///*Do Nothing
	#define LED2_GET		///*Do Nothing
	#define LED2_PUT(val)	///*Do Nothing
	#define	LED2_INIT		///*Do Nothing
	#define LED2_DEINIT		///*Do Nothing

	#define LED3_ON			///*Do Nothing
	#define LED3_OFF		///*Do Nothing
	#define LED3_TOGGLE		///*Do Nothing
	#define LED3_GET		///*Do Nothing
	#define LED3_PUT(val)	///*Do Nothing
	#define	LED3_INIT		///*Do Nothing
	#define LED3_DEINIT		///*Do Nothing

#endif

/*
 * Function Name: LED_TEST
 * Function Type: void
 * Date: 02.04.2015
 *
 * Description: This is a test function for
 * 				LEDs
 */

void LED_TEST(void);

/*
 * Function Name: LED_INIT
 * Function Type: void
 * Date: 02.04.2015
 *
 * Description: This is the initialization
 * 				function for the LEDs.
 */

void LED_INIT(void);

/*
 * Function Name: LED_DEINIT
 * Function Type: void
 * Date: 02.04.2015
 *
 * Description: This is the deinitialization
 * 				function for the LEDs
 */

void LED_DEINIT (void);
#endif /* LED_H_ */
