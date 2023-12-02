

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "../../MCAL/TIMERS/TIMER2/TIMER2_Interface.h"
#include "../../MCAL/DIO/DIO_Interface.h"
#include <util/delay.h>




typedef enum{
	ULTRASONIC_1=pin0,
	ULTRASONIC_2=pin1,
	ULTRASONIC_3=pin2,
	ULTRASONIC_4=pin3
	}ULTRASONIC_type;
	
	
void ULTRASONIC_Init(void);
u8 ULTRASONIC_GetDistance(ULTRASONIC_type ultrasonic_pin);
u8 ULTRASONIC_GetDistance2(ULTRASONIC_type ultrasonic_pin);
void ULTRASONIC_Start(ULTRASONIC_type ultrasonic_pin);
u8 ULTRASONIC_GetDistanceNoBlock(u8*Pdistance);

#endif /* ULTRASONIC_H_ */
