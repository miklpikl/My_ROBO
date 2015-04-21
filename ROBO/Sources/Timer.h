/*
 * Timer.h
 *
 *  Created on: Apr 13, 2015
 *      Author: MiklPikl
 */

#ifndef TIMER_H_
#define TIMER_H_

#define TIMER_TICK_MS 1
	///*Sets the time for the interrupt flag

/*
 * Function Name: TIMER_OnInterrupt
 * Function Type: void
 * Date: 13.04.2015
 *
 * Description: This function is called from the timer
 * 				interrupt every TIMER_TICK_MS.
 */

void TIMER_OnInterrupt(void);

/*
 * Function Name: TIMER_Init
 * Function Type: void
 * Date: 13.04.2015
 *
 * Description: This is the Timer initialization
 */

void TIMER_Init(void);

/*
 * Function Name: TIMER_DeInit
 * Function Type: void
 * Date: 13.04.2015
 *
 * Description: This is the Timer deinitializtion.
 */

#endif /* TIMER_H_ */
