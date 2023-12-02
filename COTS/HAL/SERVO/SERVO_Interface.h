/*=================================================================================*/
/*  File        : SERVO_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/14/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_HAL_SERVO_SERVO_INTERFACE_H_
#define COTS_HAL_SERVO_SERVO_INTERFACE_H_

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../MCAL/TIMERS/TIMER1/TIMER1_Interface.h"

/*==============================================================================================*/
/**************************    A.Talaat SERVO MOTOR Functions Prototypes     *********************/
/*==============================================================================================*/
/****************************     SERVO_voidRotateSpecificAngle_OC1A    *************************/
/****************************     SERVO_voidRotateSpecificAngle_OC1B    *************************/
/*==============================================================================================*/

/************************************************************************************************/
/* Function Name : SERVO_voidRotateSpecificAngle_OC1A                                           */
/* Description : Rotate Servo Motor with Specific Angle by PWM TIMER1 at PIN  OCA1   (PD5)      */
/* Fun. Argument1:  Copy_u16Angle      Angle From [ 0  To  180 ] Degree                         */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void SERVO_voidRotateSpecificAngle_OC1A ( u16 Copy_u16Angle );

/************************************************************************************************/
/* Function Name : SERVO_voidRotateSpecificAngle_OC1B                                           */
/* Description : Rotate Servo Motor with Specific Angle by PWM TIMER1 at PIN  OCB1   (PD4)      */
/* Fun. Argument1:  Copy_u16Angle      Angle From [ 0  To  180 ] Degree                         */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void SERVO_voidRotateSpecificAngle_OC1B ( u16 Copy_u16Angle );



#endif /* COTS_HAL_SERVO_SERVO_INTERFACE_H_ */
