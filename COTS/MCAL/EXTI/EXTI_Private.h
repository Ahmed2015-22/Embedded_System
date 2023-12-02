/*=================================================================================*/
/*  File        : EXTI_Private.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/11/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_MCAL_EXTI_EXTI_PRIVATE_H_
#define COTS_MCAL_EXTI_EXTI_PRIVATE_H_

#define  GICR_REG            *((volatile u8*)0x5B)
#define  MCUCR_REG           *((volatile u8*)0x55)
#define  MCUCSR_REG          *((volatile u8*)0x54)

/* Private Macros to BIT Numbers */
#define  PIN0                    0
#define  PIN1                    1
#define  PIN2                    2
#define  PIN3                    3
#define  PIN4                    4
#define  PIN5                    5
#define  PIN6                    6
#define  PIN7                    7


#endif /* COTS_MCAL_EXTI_EXTI_PRIVATE_H_ */
