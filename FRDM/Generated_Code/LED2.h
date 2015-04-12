/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : LED2.h
**     Project     : FRDM
**     Processor   : MKL25Z128VLK4
**     Component   : LEDbit
**     Version     : Component 01.003, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-04-12, 15:10, # CodeGen: 1
**     Abstract    :
**          This component implements a universal driver for a single LED.
**     Settings    :
**          Component name                                 : LED2
**          Turned On with initialization                  : no
**          HW Interface                                   : 
**            On/Off                                       : Enabled
**              Pin                                        : LEDpin
**            PWM                                          : Disabled
**            High Value means ON                          : no
**          Shell                                          : Disabled
**     Contents    :
**         Init       - void LED2_Init(void);
**         Deinit     - void LED2_Deinit(void);
**         On         - void LED2_On(void);
**         Off        - void LED2_Off(void);
**         Neg        - void LED2_Neg(void);
**         Get        - byte LED2_Get(void);
**         Put        - void LED2_Put(byte val);
**         SetRatio16 - void LED2_SetRatio16(word ratio);
**
**     License   :  Open Source (LGPL)
**     Copyright : (c) Copyright Erich Styger, 2013, all rights reserved.
**     Web: http://mcuoneclipse.com
**     This an open source software implementing an LED driver using Processor Expert.
**     This is a free software and is opened for education, research and commercial developments under license policy of following terms:
**     * This is a free software and there is NO WARRANTY.
**     * No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     * Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file LED2.h
** @version 01.00
** @brief
**          This component implements a universal driver for a single LED.
*/         
/*!
**  @addtogroup LED2_module LED2 module documentation
**  @{
*/         

#ifndef __LED2_H
#define __LED2_H

/* MODULE LED2. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "LEDpin2.h"

#include "Cpu.h"

#define LED2_ClrVal()    LEDpin2_ClrVal() /* put the pin on low level */
#define LED2_SetVal()    LEDpin2_SetVal() /* put the pin on high level */
#define LED2_SetInput()  LEDpin2_SetInput() /* use the pin as input pin */
#define LED2_SetOutput() LEDpin2_SetOutput() /* use the pin as output pin */

#define LED2_PARSE_COMMAND_ENABLED  0 /* set to 1 if method ParseCommand() is present, 0 otherwise */


#define LED2_On() LEDpin2_ClrVal()
/*
** ===================================================================
**     Method      :  LED2_On (component LEDbit)
**     Description :
**         This turns the LED on.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LED2_Off() LEDpin2_SetVal()
/*
** ===================================================================
**     Method      :  LED2_Off (component LEDbit)
**     Description :
**         This turns the LED off.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LED2_Neg() LEDpin2_NegVal()
/*
** ===================================================================
**     Method      :  LED2_Neg (component LEDbit)
**     Description :
**         This negates/toggles the LED
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LED2_Get() (!(LEDpin2_GetVal()))
/*
** ===================================================================
**     Method      :  LED2_Get (component LEDbit)
**     Description :
**         This returns logical 1 in case the LED is on, 0 otherwise.
**     Parameters  : None
**     Returns     :
**         ---             - Status of the LED (on or off)
** ===================================================================
*/

#define LED2_Init() LED2_Off()
/*
** ===================================================================
**     Method      :  LED2_Init (component LEDbit)
**     Description :
**         Performs the LED driver initialization.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LED2_Put(val)  ((val) ? LED2_On() : LED2_Off())
/*
** ===================================================================
**     Method      :  LED2_Put (component LEDbit)
**     Description :
**         Turns the LED on or off.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - value to define if the LED has to be on or
**                           off.
**     Returns     : Nothing
** ===================================================================
*/

void LED2_Deinit(void);
/*
** ===================================================================
**     Method      :  LED2_Deinit (component LEDbit)
**     Description :
**         Deinitializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LED2_SetRatio16(word ratio);
/*
** ===================================================================
**     Method      :  LED2_SetRatio16 (component LEDbit)
**     Description :
**         Method to specify the duty cycle. If using a PWM pin, this
**         means the duty cycle is set. For On/off pins, values smaller
**         0x7FFF means off, while values greater means on.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ratio           - Ratio value, where 0 means 'off' and
**                           0xffff means 'on'
**     Returns     : Nothing
** ===================================================================
*/

/* END LED2. */

#endif
/* ifndef __LED2_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.11]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
