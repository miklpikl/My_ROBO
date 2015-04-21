/*
 * Key.c
 *
 *  Created on: Apr 14, 2015
 *      Author: MiklPikl
 */

#include "Platform.h"
#if PL_HAS_KEYS
	#include "Key.h"

#if PL_HAS_EVENTS
	#include "Event.h"
#endif

#if PL_HAS_DEBOUNCE
	#include "KeyDebounce.h"
#endif

///* Key Button Interrupt Code
#if PL_HAS_KBI

void KEY_OnInterrupt(KEY_Buttons button)
{
	#if PL_HAS_DEBOUNCE
		KEYDBNC_Scan();
	#else
		switch(button)
		{

			#if PL_NUM_KEYS >= 1
			case KEY_BTN1:
				EVENT_Set(EVENT_KeyA_Press);
				break;
			#endif

			#if PL_NUM_KEYS >= 2
			case KEY_BTN2:
				EVENT_Set(EVENT_KeyB_Press);
				break;
			#endif

			#if PL_NUM_KEYS >= 3
			case KEY_BTN3:
				EVENT_Set(EVENT_KeyC_Press);
				break;
			#endif

			#if PL_NUM_KEYS >= 4
			case KEY_BTN4:
				EVENT_Set(EVENT_KeyD_Press);
				break;
			#endif

			#if PL_NUM_KEYS >= 5
			case KEY_BTN5:
				EVENT_Set(EVENT_KeyE_Press);
				break;
			#endif

			#if PL_NUM_KEYS >= 6
			case KEY_BTN6:
				EVENT_Set(EVENT_KeyF_Press);
				break;
			#endif

			#if PL_NUM_KEYS >= 7
			case KEY_BTN7:
				EVENT_Set(EVENT_KeyKEY_Press);
				break;
			#endif

			default:
				///*Nothing set here
				break;

		}
	#endif	///*End of PL_HAS_DEBOUNCE
}

void KEY_EnableInterrupts(void)
{
	#if PL_NUM_KEYS >= 1 && !PL_KEY_POLLED_KeyA
		KeyA_Enable();
	#endif

	#if PL_NUM_KEYS >= 2 && !PL_KEY_POLLED_KeyB
		KeyB_Enable();
	#endif

	#if PL_NUM_KEYS >= 3 && !PL_KEY_POLLED_KeyC
		KeyC_Enable();
	#endif

	#if PL_NUM_KEYS >= 4 && !PL_KEY_POLLED_KeyD
		KeyD_Enable();
	#endif

	#if PL_NUM_KEYS >= 5 && !PL_KEY_POLLED_KeyE
		KeyE_Enable();
	#endif

	#if PL_NUM_KEYS >= 6 && !PL_KEY_POLLED_KeyF
		KeyF_Enable();
	#endif

	#if PL_NUM_KEYS >= 7 && !PL_KEY_POLLED_KeyKEY
		KeyKEY_Enable();
	#endif
}

void KEY_DisableInterrupts(void)
{
	#if PL_NUM_KEYS >= 1 && !PL_KEY_POLLED_KeyA
		KeyA_Disable();
	#endif

	#if PL_NUM_KEYS >= 2 && !PL_KEY_POLLED_KeyB
		KeyB_Disable();
	#endif

	#if PL_NUM_KEYS >= 3 && !PL_KEY_POLLED_KeyC
		KeyC_Disable();
	#endif

	#if PL_NUM_KEYS >= 4 && !PL_KEY_POLLED_KeyD
		KeyD_Disable();
	#endif

	#if PL_NUM_KEYS >= 5 && !PL_KEY_POLLED_KeyE
		KeyE_Disable();
	#endif

	#if PL_NUM_KEYS >= 6 && !PL_KEY_POLLED_KeyF
		KeyF_Disable();
	#endif

	#if PL_NUM_KEYS >= 7 && !PL_KEY_POLLED_KeyKEY
		KeyKEY_Disable();
	#endif
}

void PORTA_OnInterrupt(void)
{
	void Cpu_ivINT_PORTA(void);

	Cpu_ivINT_PORTA();
}

#endif

void KEY_Init(void)
{
	///*Nothing needed here for now
}

void KEY_DeInit(void)
{
	///*Nothing needed here for now
}

void KEY_Scan(void)
{
	#if PL_HAS_DEBOUNCE
		KEYDBNC_Scan();
	#else
		int counter = 0;

		#if PL_NUM_KEYS >= 1 && PL_KEY_POLLED_KeyA
			if(KeyA_Get()) 		///*Checks if Key is pressed
			{
				EVENT_Set(EVENT_KeyA_Press);
				counter++;

				if(counter > 500)
				{
					EVENT_Set(EVENT_KeyA_Held);
					counter = 0;
				}

				if(!KeyA_Get)
				{
					EVENT_Set(EVENT_KeyA_Release)
				}
			}

		#endif

		#if PL_NUM_KEYS >= 2 && PL_KEY_POLLED_KeyB
			if(KeyB_Get()) 		///*Checks if Key is pressed
			{
				EVENT_Set(EVENT_KeyB_Press);
				counter++;

				if(counter > 500)
				{
					EVENT_Set(EVENT_KeyB_Held);
					counter = 0;
				}

				if(!KeyB_Get)
				{
					EVENT_Set(EVENT_KeyB_Release);
				}
			}


		#endif

		#if PL_NUM_KEYS >= 3 && PL_KEY_POLLED_KeyC
			if(KeyC_Get()) 		///*Checks if Key is pressed
			{
				EVENT_Set(EVENT_KeyC_Press);
				counter++;

				if(counter > 500)
				{
					EVENT_Set(EVENT_KeyC_Held);
					counter = 0;
				}

				if (!KeyC_Get())
				{
					EVENT_Set(EVENT_KeyC_Release);
				}
			}


		#endif

		#if PL_NUM_KEYS >= 4 && PL_KEY_POLLED_KeyD
			if(KeyD_Get()) 		///*Checks if Key is pressed
			{
				EVENT_Set(EVENT_KeyD_Press);
				counter++;

				if(counter > 500)
				{
					EVENT_Set(EVENT_KeyD_Held);
					counter = 0;
				}

				if (!KeyD_Get())
				{
					EVENT_Set(EVENT_KeyD_Release);
				}
			}
		#endif

		#if PL_NUM_KEYS >= 5 && PL_KEY_POLLED_KeyE
			if(KeyE_Get()) 		///*Checks if Key is pressed
			{
				EVENT_Set(EVENT_KeyE_Press);
				counter++;

				if(counter > 500)
				{
					EVENT_Set(EVENT_KeyE_Held);
					counter = 0;
				}

				if (!KeyE_Get())
				{
					EVENT_Set(EVENT_KeyE_Release);
				}
			}
		#endif

		#if PL_NUM_KEYS >= 6 && PL_KEY_POLLED_KeyF
			if(KeyF_Get()) 		///*Checks if Key is pressed
			{
				EVENT_Set(EVENT_KeyF_Press);
				counter++;

				if(counter > 500)
				{
					EVENT_Set(EVENT_KeyF_Held);
					counter = 0;
				}

				if (!KeyF_Get())
				{
					EVENT_Set(EVENT_KeyF_Release);
				}
			}
		#endif

		#if PL_NUM_KEYS >= 7 && PL_KEY_POLLED_KeyKEY
			if(KeyKEY_Get()) 		///*Checks if Key is pressed
			{
				EVENT_Set(EVENT_KeyKEY_Press);
				counter++;

				if(counter > 500)
				{
					EVENT_Set(EVENT_KeyKEY_Held);
					counter = 0;
				}

				if (!KeyKEY_Get())
				{
					EVENT_Set(EVENT_KeyKEY_Release);
				}
			}
		#endif
	#endif		///*Ends Debounce loop
}
#endif ///*PL_HAS_KEYS
