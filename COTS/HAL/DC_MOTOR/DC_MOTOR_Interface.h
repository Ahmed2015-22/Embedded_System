/*=================================================================================*/
/*  File        : DC_MOTOR_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/9/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_
#define COTS_HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_

#include "../../MCAL/DIO/DIO_Interface.h"

void DC_Motor_Init(u8 port , u8 pinF , u8 pinB);

void DC_Motor_Move_Forword(u8 port , u8 pinF , u8 pinB);

void DC_Motor_Move_Backrword(u8 port , u8 pinF , u8 pinB);

void DC_Motor_Stop(u8 port , u8 pinF , u8 pinB);

#endif /* COTS_HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_ */
