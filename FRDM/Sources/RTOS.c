/*
 * RTOS.c
 *
 *  Created on: Apr 12, 2015
 *      Author: MiklPikl
 */
#include "Platform.h"

#if PL_HAS_RTOS
#include "FRTOS1.h"
#include "RTOS.h"
#include "CLS1.h"
#include "LED.h"
#include "Key.h"
#include "Event.h"
#include "Application.h"
#include "WAIT1.h"
#include "Mealy.h"

///*Scheduler Task variables

static void T2(void* param)
{
	while(1)
	{
		LED1_TOGGLE;
	}

}

static void T3(void* param)
{
	while(1)
	{
		LED2_TOGGLE;
	}
}

static void AppTask(void* param)
{
	//CLS1_SendStr("INFO: Application startup!\r\n", CLS1_GetStdio()->stdOut);
	EVENT_Set(EVENT_Start);		///*Sets the start up event

	while(1)
	{
		EVENT_HandleEvent(APP_HandleEvents);

		#if PL_HAS_KEYS && PL_NUM_KEYS > 0
			KEY_Scan();				///*Scans the Joystick shield for input
		#endif

		#if PL_HAS_MEALY
			MEALY_Step();
		#endif

		LED1_TOGGLE;
		FRTOS1_vTaskDelay(10 / portTICK_RATE_MS);
	}
}

void RTOS_Run(void)
{
	FRTOS1_vTaskStartScheduler();
	///*Does not usually return here
}

void RTOS_Init(void)
{
	#if 1
		if(FRTOS1_xTaskCreate(AppTask, (signed portCHAR*)"App", configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY, NULL) != pdPASS)
		{
			while(1)
			{
				LED1_ON;
				WAIT1_Waitms(200);
				LED1_OFF;
				WAIT1_Waitms(200);
				///*Error code
			}
		}

	#endif

	#if 0
		if(FRTOS1_xTaskCreate(T2, (signed portCHAR*)"T2", configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY, NULL) != pdPASS)
			{
				while(1)
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
					///*Error code
				}
			}

		if(FRTOS1_xTaskCreate(T3, (signed portCHAR*)"T3", configMINIMAL_STACK_SIZE, NULL, tskIDLE_PRIORITY, NULL) != pdPASS)
			{
				while(1)
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
					///*Error code
				}
			}
	#endif
}
void RTOS_DeInit(void)
{
	///*Empty for now
}

#endif
