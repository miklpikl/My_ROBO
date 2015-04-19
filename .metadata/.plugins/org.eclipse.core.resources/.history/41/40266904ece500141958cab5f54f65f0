/*
 *	Filename: Platform.c

 *	Creator: Michael McCormick
 *	Date: 02.04.2015
 *	Class: Infotronics
 *
 *	Description: This file will initialize the platform
 *				 configurations in Platform.h
 */

#include "Platform.h"
#include "LED.h"
#include "RTOS.h"
#include "Event.h"

void PL_INIT(void)
{
	if PL_HAS_LED
	{
		LED_INIT();
	}

	if PL_HAS_RTOS
	{
		RTOS_Init();
	}

	if PL_HAS_EVENTS
	{
		EVENT_Init();
	}

	if PL_HAS_EVENTS
	{
		EVENT_Init();
	}
}

void PL_DEINIT(void)
{

}


