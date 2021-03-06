/*
 * Timer.c
 *
 *  Created on: Apr 13, 2015
 *      Author: MiklPikl
 */

#include "Platform.h"

///*Preprocessor Includes
#if PL_HAS_TIMER
	#include "Timer.h"

#if PL_HAS_LED
	#include "LED.h"
#endif

#if PL_HAS_EVENTS
	#include "Event.h"
#endif

#if PL_HAS_TRIGGER
	#include "Trigger.h"
#endif

void TIMER_OnInterrupt(void)
{
	static int counter = 0;
	///*This code is called from the interrupt

	#if PL_HAS_TRIGGER
		TRG_IncTick();
	#endif

	counter++;
	if (counter == (1000/TIMER_TICK_MS))
	{
		#if 1
			EVENT_Set(EVENT_LED_Flash);
		#else
			LED1_TOGGLE;
		#endif

		counter = 0;
	}
}

void TIMER_Init(void)
{
	///*This is empty for now
}

void TIMER_DeInit(void)
{
	///*This is empty for now
}

#endif
