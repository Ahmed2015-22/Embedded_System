/*=================================================================================*/
/*  File        : EXTI_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/11/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/
#include "EXTI_Private.h"
#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"

#ifndef COTS_MCAL_EXTI_EXTI_INTERFACE_H_
#define COTS_MCAL_EXTI_EXTI_INTERFACE_H_

#define  INT0             0
#define  INT1             1
#define  INT2             2

/* Macros as Sense Control options */
#define  FALLING_EDGE                 0
#define  RAISING_EDGE                 1
#define  LOW_LEVEL                    2
#define  ON_CHANGE                    3


/*=================================================================================================================*/
/*====================================       A.Talaat EXTI Functions Prototype        ==============================*/
/*=================================================================================================================*/
/**********************************************  [1]  EXTI_voidEnable          *************************************/
/**********************************************  [2]  EXTI_voidDisable         *************************************/
/**********************************************  [3]  EXTI_voidSetCallBack     *************************************/
/*=================================================================================================================*/

/*********************************************************************************************/
/* Function Name : EXTI_voidEnable                                                           */
/* Description :  Enable (PIE) Peripheral Interrupt Enable and Put Sesnse Control            */
/* Fun. Argument1: Copy_u8INTnumber { INT0 , INT1 , INT2 }                                   */
/* Fun. Argument1: Copy_u8SenseControl {FALLING_EDGE, RAISING_EDGE, LOW_LEVEL, ON_CHANGE}    */
/* Fun. Return : void                                                                        */
/*********************************************************************************************/
void EXTI_voidEnable ( u8 Copy_u8INTnumber , u8 Copy_u8SenseControl );

/*****************************************************************************/
/* Function Name : EXTI_voidDisable                                          */
/* Description :  Disable (PIE) Peripheral Interrupt Enable                  */
/* Fun. Argument1: Copy_u8INTnumber { INT0 , INT1 , INT2 }                   */
/* Fun. Return : void                                                        */
/*****************************************************************************/
void EXTI_voidDisable ( u8 Copy_u8INTnumber );

/*****************************************************************************/
/* Function Name : EXTI_voidSetCallBack                                      */
/* Description : Function Call Back that assign Pointer of application       */
/*               Function to our global pointer to use it at ISR Fun.        */
/* Fun. Argument1:{ void (*Local_PointerToFunction) (void) }                 */
/*                Pointer to function that = Address of application function */
/* Fun. Return : void                                                        */
/*****************************************************************************/
void EXTI_voidSetCallBack ( u8 Copy_u8INTnumber , void (*Local_PointerToFunction) (void) );



#endif /* COTS_MCAL_EXTI_EXTI_INTERFACE_H_ */
