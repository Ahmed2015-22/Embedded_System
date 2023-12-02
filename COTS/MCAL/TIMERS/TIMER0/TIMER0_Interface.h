/*=================================================================================*/
/*  File        : TIMER0_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/13/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_MCAL_TIMERS_TIMER0_TIMER0_INTERFACE_H_
#define COTS_MCAL_TIMERS_TIMER0_TIMER0_INTERFACE_H_

#include "TIMER0_Private.h"
#include "TIMER0_Config.h"
#include "../../../LIB/Bit_Math.h"
#include "../../../LIB/STD_Types.h"

/*============================================================================================================*/
/*===============================     A.Talaat TIMER0 Functions Prototypes       ==============================*/
/*============================================================================================================*/
/***************************  [1]  TIMER0_voidInit                                     ************************/
/***************************  [2]  TIMER0_voidSetCallBack_OVF                          ************************/
/***************************  [3]  TIMER0_voidSetCallBack_CTC                          ************************/
/***************************  [4]  TIMER0_voidSetPreloadValue                          ************************/
/***************************  [5]  TIMER0_voidSetCompareMatchValue                     ************************/
/***************************  [6]  TIMER0_voidSetBusyWait_ms                           ************************/
/***************************  [7]  TIMER0_voidTalaatPWM                                 ************************/
/***************************  [8]  TIMER0_voidSetCallBack_CTC_andRequiredTime_ms       ************************/
/***************************  [9]  void __vector_11 (void)   __attribute__((signal));  ************************/
/***************************  [10]  void __vector_10 (void)   __attribute__((signal)); ************************/
/*============================================================================================================*/

/************************************************************************************************/
/* Function Name : TIMER0_voidInit                                                              */
/* Description : Initilization of TIMER0 with Specific Specks accordig to Gonfigration File.h   */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER0_voidInit (void);

/************************************************************************************************/
/* Function Name : TIMER0_voidSetCallBack_OVF                                                   */
/* Description : Call Back Function To Assign the address of OVF APP. Fun. at Global Pointer    */
/* Fun. Argument1: (*Local_PointerToFunction_OVF) { Address of OVF Application Function }       */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER0_voidSetCallBack_OVF (void (*Local_PointerToFunction_OVF) (void));

/************************************************************************************************/
/* Function Name : TIMER0_voidSetCallBack_CTC                                                   */
/* Description : Call Back Function To Assign the address of CTC APP. Fun. at Global Pointer    */
/* Fun. Argument1: (*Local_PointerToFunction_CTC) { Address of CTC Application Function }       */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER0_voidSetCallBack_CTC (void (*Local_PointerToFunction_CTC) (void));

/************************************************************************************************/
/* Function Name : TIMER0_voidSetPreloadValue                                                   */
/* Description : Set Preload Value in a Timer Register to Start Count From this Preload Value   */
/* Fun. Argument1: Copy_u8PreloadValue  { from  0  To  255 }                                    */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER0_voidSetPreloadValue ( u8 Copy_u8PreloadValue );

/************************************************************************************************/
/* Function Name : TIMER0_voidSetCompareMatchValue                                              */
/* Description : Set Compare Match Value in OCR0 Register To make Timer Over Flow at This Value */
/* Fun. Argument1: Copy_u8CompareMatchValue  { from  0  To  255 }                               */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER0_voidSetCompareMatchValue ( u8 Copy_u8CompareMatchValue );

/**************************************************************************************************/
/* Function Name : TIMER0_voidSetBusyWait_ms                                                      */
/* Description : Set Busy Wait Function work as Delay by make Processor Stuck in Fun. during Time */
/* Fun. Argument1: Copy_u32Time_ms  { any Time in Milliseconds }                                  */
/* Fun. Return : void                                                                             */
/**************************************************************************************************/
void TIMER0_voidSetBusyWait_ms ( u32 Copy_u32Time_ms );

/************************************************************************************************/
/* Function Name : TIMER0_voidTalaatPWM                                                          */
/* Description : Set Compare Match Value in OCR0 Register To make PWM at PIN OC0                */
/* Fun. Argument1: Local_u8CompareMatchValue  { from  0  To  255 }                              */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER0_voidTalaatPWM ( u8 Local_u8CompareMatchValue );

/************************************************************************************************/
/* Function Name : TIMER0_voidSetCallBack_CTC_andRequiredTime_ms                                */
/* Description : Call Back Function To Assign the address of CTC APP. Fun. at Global Pointer    */
/* Fun. Argument1: (*Local_PointerToFunction_CTC) { Address of CTC Application Function }       */
/* Fun. Argument2: Local_u32Time_ms { Required Time }                                           */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER0_voidSetCallBack_CTC_andRequiredTime_ms (void (*Local_PointerToFunction_CTC) (void),u32 Copy_u32Time_ms);

#endif /* COTS_MCAL_TIMERS_TIMER0_TIMER0_INTERFACE_H_ */
