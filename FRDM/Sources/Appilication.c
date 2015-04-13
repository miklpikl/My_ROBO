/*
 * Appilication.c
 *
 *  Created on: Apr 13, 2015
 *      Author: MiklPikl
 */

#include "Platform.h"
#include "Application.h"
#include "LED.h"
#include "CLS1.h"
#include "WAIT1.h"
#include "Event.h"
#include "RTOS.h"

void APP_HandleEvents(EVENT_Handle event)
{
	switch(event)
	{
	case EVENT_Start:
		LED1_ON;
		WAIT1_Waitms(100);
		LED1_OFF;
		break;

	case EVENT_LED_Flash:
		LED1_TOGGLE;
		break;

	#if PL_NUM_KEYS >= 1
	case EVENT_SW1_Press:
		CLS1_SendStr("SW1\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW1_Held:
		CLS1_SendStr("SW1 long\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW1_Release:
		CLS1_SendStr("SW1 release\r\n", CLS1_GetStdio()->stdOut);
		break;
	#endif

	#if PL_NUM_KEYS >= 2
	case EVENT_SW2_Press:
		CLS1_SendStr("SW2\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW2_Held:
		CLS1_SendStr("SW2 long\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW2_Release:
		CLS1_SendStr("SW2 release\r\n", CLS1_GetStdio()->stdOut);
		break;
	#endif

	#if PL_NUM_KEYS >= 3
	case EVENT_SW3_Press:
		CLS1_SendStr("SW3\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW3_Held:
		CLS1_SendStr("SW3 long\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW3_Release:
		CLS1_SendStr("SW3 release\r\n", CLS1_GetStdio()->stdOut);
		break;
	#endif

	#if PL_NUM_KEYS >= 4
	case EVENT_SW4_Press:
		CLS1_SendStr("SW4\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW4_Held:
		CLS1_SendStr("SW4 long\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW4_Release:
		CLS1_SendStr("SW4 release\r\n", CLS1_GetStdio()->stdOut);
		break;
	#endif

	#if PL_NUM_KEYS >= 5
	case EVENT_SW5_Press:
		CLS1_SendStr("SW5\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW5_Held:
		CLS1_SendStr("SW5 long\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW5_Release:
		CLS1_SendStr("SW5 release\r\n", CLS1_GetStdio()->stdOut);
		break;
	#endif

	#if PL_NUM_KEYS >= 6
	case EVENT_SW6_Press:
		CLS1_SendStr("SW6\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW6_Held:
		CLS1_SendStr("SW6 long\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW6_Release:
		CLS1_SendStr("SW6 release\r\n", CLS1_GetStdio()->stdOut);
		break;
	#endif

	#if PL_NUM_KEYS >= 7
	case EVENT_SW7_Press:
		CLS1_SendStr("SW7\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW7_Held:
		CLS1_SendStr("SW7 long\r\n", CLS1_GetStdio()->stdOut);
		break;
	case EVENT_SW7_Release:
		CLS1_SendStr("SW7 release\r\n", CLS1_GetStdio()->stdOut);
		break;
	#endif

	default:
	break;	///*ends the switch
	}

}

void APP_Run(void)
{

}


