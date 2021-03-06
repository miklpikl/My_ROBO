/*
 * Event.c
 *
 *  Created on: Apr 13, 2015
 *      Author: MiklPikl
 */
#include "Platform.h"

#if PL_HAS_EVENTS

#include "Event.h"
#include "CS1.h"

///*Memory Unit and Event Macros
	typedef uint8_t EVENT_MemUnit; 			///*This will store the flags from events
	#define EVENT_MEM_UNIT_NUM_BITS (sizeof(EVENT_MemUnit)*8) ///*Sets the size of the memory unit

	static EVENT_MemUnit EVENT_Events[((EVENT_NUM_EVENTS - 1) / EVENT_MEM_UNIT_NUM_BITS)+1];

	#define SET_Event(event)\
	EVENT_Events[(event)/EVENT_MEM_UNIT_NUM_BITS] |= (1 << (EVENT_MEM_UNIT_NUM_BITS - 1)) >> ((uint8_t)((event)%EVENT_MEM_UNIT_NUM_BITS))
	///*This macro sets the event

	#define CLEAR_Event(event)\
	EVENT_Events[(event)/EVENT_MEM_UNIT_NUM_BITS] &= ~(1 << (EVENT_MEM_UNIT_NUM_BITS - 1)) >> ((uint8_t)((event)%EVENT_MEM_UNIT_NUM_BITS))
	///*This macro sets the event

	#define GET_Event(event)\
	(bool)(EVENT_Events[(event)/EVENT_MEM_UNIT_NUM_BITS] & (1 << (EVENT_MEM_UNIT_NUM_BITS - 1)) >> (uint8_t)(event)%EVENT_MEM_UNIT_NUM_BITS)
	///*Returns TRUE if the event is SET, FALSE if otherwise

void EVENT_Set(EVENT_Handle event)
{
	CS1_CriticalVariable()

	CS1_EnterCritical();
	SET_Event(event);
	CS1_ExitCritical();
}

void EVENT_Clear(EVENT_Handle event)
{
	CS1_CriticalVariable()

	CS1_EnterCritical();
	CLEAR_Event(event);
	CS1_ExitCritical();
}

bool EVENT_IsSet(EVENT_Handle event)
{
	CS1_CriticalVariable()
	bool resolution;

	CS1_EnterCritical();
	resolution = GET_Event(event);
	CS1_ExitCritical();

	return resolution;
}

bool EVENT_IsSetAutoClear(EVENT_Handle event)
{
	bool resolution;

	resolution = GET_Event(event);

	if (resolution)
	{
		CLEAR_Event(event); ///*Automatically clears the event
	}

	return resolution;
}

void EVENT_HandleEvent (void (*callback)(EVENT_Handle))
{
	EVENT_Handle event;
	CS1_CriticalVariable()

	CS1_EnterCritical();
	for (event = (EVENT_Handle)0; event < EVENT_NUM_EVENTS; event++)
	{
		if (GET_Event(event))
		{
			CLEAR_Event(event);
			break;			///*Gets the program out of the loop
		}
	} 							///*This loop tests every event

	CS1_ExitCritical();

	if (event != EVENT_NUM_EVENTS)
	{
		callback(event);
	}
}

void EVENT_Init(void)
{
	uint8_t i;

	i = 0;

	do
	{
		EVENT_Events[i] = 0; 	///*This initializes the structure
		i++;
	} while(i < sizeof(EVENT_Events) / sizeof(EVENT_Events[0]));
}			///*This function clears any events that are currently in use

void EVENT_DeInit(void)
{
	///*This is empty for now
}

#endif


