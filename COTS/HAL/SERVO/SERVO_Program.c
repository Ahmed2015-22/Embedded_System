/*=================================================================================*/
/*  File        : SERVO_Program.c                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/14/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/

#include "SERVO_Interface.h"

void SERVO_voidRotateSpecificAngle_OC1A ( u16 Copy_u16Angle )
{
    DIO_Set_Pin_directio(portD, pin5 , Output);
    u32 Local_u32Variable ;
    Local_u32Variable = ((Copy_u16Angle*1000UL)+179820) / (180) ;
    TIMER1_voidTalaat_u16PWM_T1A ( Local_u32Variable ,19999);
}

/************************************************************************************************/
/* Function Name : SERVO_voidRotateSpecificAngle_OC1B                                           */
/* Description : Rotate Servo Motor with Specific Angle by PWM TIMER1 at PIN  OCB1 (PD4)        */
/* Fun. Argument1:  Copy_u16Angle      Angle From [ 0  To  180 ] Degree                         */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void SERVO_voidRotateSpecificAngle_OC1B ( u16 Copy_u16Angle )
{
    DIO_Set_Pin_directio(portD, pin4 , Output);
    u32 Local_u32Variable ;
    Local_u32Variable = ((Copy_u16Angle*1000UL)+179820) / (180) ;
    TIMER1_voidTalaat_u16PWM_T1B ( Local_u32Variable ,19999);
}
