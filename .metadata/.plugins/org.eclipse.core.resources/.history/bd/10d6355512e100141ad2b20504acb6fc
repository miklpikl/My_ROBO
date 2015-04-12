/*
 * Filename: LED.c
 * Creator: Michael McCormick
 * Date: 02.04.2015
 * Class: Infotronics
 *
 * Description: This file will define the functions
 * 				in LED.h.
 */

#include "LED.h"
#include "WAIT1.h"
#include "Platform.h"

void LED_TEST(void)
{
	bool LED_ON = TRUE;

	LED1_ON;
	WAIT1_Waitms(500);
	LED2_ON;
	WAIT1_Waitms(500);
	LED3_ON;
	WAIT1_Waitms(500);

	LED1_OFF;
	LED2_OFF;
	LED3_OFF;

	LED3_TOGGLE;
	WAIT1_Waitms(500);
	LED2_TOGGLE;
	WAIT1_Waitms(500);
	LED1_TOGGLE;
	WAIT1_Waitms(500);

	LED1_OFF;
	LED2_OFF;
	LED3_OFF;

	LED1_ON;

	if (!LED1_GET)
	{
		LED1_ON;
		WAIT1_Waitms(200);
		LED1_OFF;
		WAIT1_Waitms(200);

		LED1_ON;
		WAIT1_Waitms(200);
		LED1_OFF;
		WAIT1_Waitms(200);

		LED1_ON;
		WAIT1_Waitms(200);
		LED1_OFF;
		WAIT1_Waitms(200);
	}

	LED1_OFF;
	if (LED1_GET)
	{
		LED1_ON;
		WAIT1_Waitms(200);
		LED1_OFF;
		WAIT1_Waitms(200);

		LED1_ON;
		WAIT1_Waitms(200);
		LED1_OFF;
		WAIT1_Waitms(200);

		LED1_ON;
		WAIT1_Waitms(200);
		LED1_OFF;
		WAIT1_Waitms(200);
	}


	LED1_PUT(LED_ON);
	if(!LED1_GET)
	{
		LED1_ON;
		WAIT1_Waitms(200);
		LED1_OFF;
		WAIT1_Waitms(200);

		LED1_ON;
		WAIT1_Waitms(200);
		LED1_OFF;
		WAIT1_Waitms(200);

		LED1_ON;
		WAIT1_Waitms(200);
		LED1_OFF;
		WAIT1_Waitms(200);
	}

}

void LED_INIT(void)
{
	LED1_INIT;
	LED2_INIT;
	LED3_INIT;
}

void LED_DEINIT(void)
{
	///*Do Nothing
}

