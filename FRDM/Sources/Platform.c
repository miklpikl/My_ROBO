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

void PL_INIT(void)
{
	if PL_HAS_LED
	{
		LED_INIT();
	}

	if PL_HAS_RTOS
	{
		RTOS_INIT();
	}
}

void PL_DEINIT(void)
{

}


