/*
 * Event.h
 *
 *  Created on: Apr 13, 2015
 *      Author: MiklPikl
 */

#ifndef EVENT_H_
#define EVENT_H_

#include "Platform.h"

#if PL_HAS_EVENTS


///*Event Handle Construct
	typedef enum EVENT_Handle
	{
		EVENT_Start,		///*Implements the start up commands for Events
		EVENT_LED_Flash,	///*Implements a LED flash sequence

		///*Add all events below this line

		#if PL_NOF_KEYS >= 1
			EVENT_SW1_Press,
			EVENT_SW1_Held,
			EVENT_SW1_Release,
		#endif

		#if PL_NOF_KEYS >= 2
			EVENT_SW2_Press,
			EVENT_SW2_Held,
			EVENT_SW2_Release,
		#endif

		#if PL_NOF_KEYS >= 3
			EVENT_SW3_Press,
			EVENT_SW3_Held,
			EVENT_SW3_Release,
		#endif

		#if PL_NOF_KEYS >= 4
			EVENT_SW4_Press,
			EVENT_SW4_Held,
			EVENT_SW4_Release,
		#endif

		#if PL_NOF_KEYS >= 5
			EVENT_SW5_Press,
			EVENT_SW5_Held,
			EVENT_SW5_Release,
		#endif

		#if PL_NOF_KEYS >= 6
			EVENT_SW6_Press,
			EVENT_SW6_Held,
			EVENT_SW6_Release,
		#endif

		#if PL_NOF_KEYS >= 7
			EVENT_SW7_Press,
			EVENT_SW7_Held,
			EVENT_SW7_Release,
		#endif

		///*End Event List

		EVENT_NUM_EVENTS		///*This is the final line for the structure
	} EVENT_Handle;


/*
 * Function Name: EVENT_Set
 * Function Type: void
 * Parameter: EVENT_Handle event
 * Date: 13.04.2015
 *
 * Description: This sets the event handle.
 */

void EVENT_Set(EVENT_Handle event);

/*
 * Function Name: EVENT_Clear
 * Function Type: void
 * Parameter: EVENT_HANDLE event
 * Date: 13.04.2015
 *
 * Description: This clears the event handle.
 */

void EVENT_Clear(EVENT_Handle event);

/*
 * Function Name: EVENT_IsSet
 * Function Type: bool
 * Parameter: EVENT_Handle event
 * Return Type: bool
 * Date: 13.04.2015
 *
 * Description: This is a checking function. It will return
 * 				TRUE if the event is set and FALSE is otherwise.
 */

bool EVENT_IsSet(EVENT_Handle event);

/*
 * Function Name: EVENT_IsSetAutoClear
 * Function Type: bool
 * Parameter: EVENT_Handle event
 * Return Type: bool
 * Date: 13.04.2015
 *
 * Description: This is a checking function. It will
 * 				return TRUE if the event is set and
 * 				FALSE if otherwise. It will also clear
 * 				the event.
 */

bool EVENT_IsSetAutoClear(EVENT_Handle event);

/*
 * Function Name: EVENT_HandleEvent
 * Function Type: void
 * Parameter: void (*callback)(EVENT_Handle))
 * Date: 13.04.2015
 *
 * Description: This function is a checking function. If there
 * 				is an event pending, the current event is cleared and
 * 				and the provided callback is called.
 */

void EVENT_HandleEvent (void (*callback)(EVENT_Handle));

/*
 * Function Name: EVENT_Init
 * Function Type: void
 * Date: 13.04.2015
 *
 * Description: This is the initialization sequence
 * 				for events on the platform.
 */

void EVENT_Init(void);

/*
 * Function Name: EVENT_DeInit
 * Function Type: void
 * Date: 13.04.2015
 *
 * Description: This is the deinitialization sequence
 * 				for events on the platform.
 */

void EVENT_DeInit(void);

#endif

#endif /* EVENT_H_ */
