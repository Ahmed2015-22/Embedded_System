/*=================================================================================*/
/*  File        : app.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_APP_H_
#define COTS_APP_H_

#include "MCAL/DIO/DIO_Interface.h"
#include "MCAL/GIE/GIE_Interface.h"
#include "MCAL/EXTI/EXTI_Interface.h"
#include "MCAL/ADC/ADC_Interface.h"
#include "MCAL/TIMERS/TIMER0/TIMER0_Interface.h"
#include "MCAL/TIMERS/TIMER1/TIMER1_Interface.h"
#include "MCAL/TIMERS/TIMER2/TIMER2_Interface.h"
#include "MCAL/USART/USART_Interface.h"
#include "MCAL/SPI/SPI_Interface.h"
#include "MCAL/I2C/I2C_Interface.h"
#include "HAL/LED/LED_Interface.h"
#include "HAL/BUTTON/BUTTON_Interface.h"
#include "HAL/Seven_Segment/Seven_Segment_Interface.h"
#include "HAL/LCD/LCD_Intarface.h"
#include "HAL/KPAD/KPAD_Interface.h"
#include "HAL/DC_MOTOR/DC_MOTOR_Interface.h"
#include "HAL/SERVO/SERVO_Interface.h"
#include "HAL/ULTRASONIC/ultrasonic.h"
#include "HAL/LM35/LM35.h"
#include "HAL/LDR/LDR.h"

void Preph_init()
{
	LED_INIT(portB , pin0);
	LED_INIT(portB , pin1);
}




#endif /* COTS_APP_H_ */
