/*=================================================================================*/
/*  File        : TIMER1_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/13/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_MCAL_TIMERS_TIMER0_TIMER0_INTERFACE_H_
#define COTS_MCAL_TIMERS_TIMER0_TIMER0_INTERFACE_H_

#include "TIMER1_Config.h"
#include "TIMER1_Private.h"
#include "../../../LIB/Bit_Math.h"
#include "../../../LIB/STD_Types.h"

/*============================================================================================================*/
/*===============================     A.Talaat TIMER1 Functions Prototypes       ==============================*/
/*============================================================================================================*/
/***************************     [1]  TIMER1_voidInit                              ****************************/
/***************************     [2]  TIMER1_voidSetCallBack_OVF                   ****************************/
/***************************     [3]  TIMER1_voidSetCallBack_CTC                   ****************************/
/***************************     [4]  TIMER1_voidSetPreloadValue                   ****************************/
/***************************     [5]  TIMER1_voidSetCompareMatchValue_T1A          ****************************/
/***************************     [6]  TIMER1_voidSetCompareMatchValue_T1B          ****************************/
/***************************     [7]  TIMER1_voidBahaa_u16PWM_T1A                  ****************************/
/***************************     [8]  TIMER1_voidBahaa_u16PWM_T1B                  ****************************/
/*============================================================================================================*/

/************************************************************************************************/
/* Function Name : TIMER1_voidInit                                                              */
/* Description : Initilization of TIMER1 with Specific Specks accordig to Gonfigration File.h   */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER1_voidInit (void);

/************************************************************************************************/
/* Function Name : TIMER1_voidSetCallBack_OVF                                                   */
/* Description : Call Back Function To Assign the address of OVF APP. Fun. at Global Pointer    */
/* Fun. Argument1: (*Local_PointerToFunction_OVF) { Address of OVF Application Function }       */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER1_voidSetCallBack_OVF (void (*Local_PointerToFunction_OVF) (void));

/************************************************************************************************/
/* Function Name : TIMER1_voidSetCallBack_CTC                                                   */
/* Description : Call Back Function To Assign the address of CTC APP. Fun. at Global Pointer    */
/* Fun. Argument1: (*Local_PointerToFunction_CTC) { Address of CTC Application Function }       */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER1_voidSetCallBack_CTC (void (*Local_PointerToFunction_CTC) (void));

/************************************************************************************************/
/* Function Name : TIMER1_voidSetPreloadValue                                                   */
/* Description : Set Preload Value in a Timer Register to Start Count From this Preload Value   */
/* Fun. Argument1: Copy_u8PreloadValue  { from  0  To  255 }                                    */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER1_voidSetPreloadValue ( u16 Copy_u16PreloadValue );

/*************************************************************************************************/
/* Function Name : TIMER1_voidSetCompareMatchValue_T1A                                           */
/* Description : Set Compare Match Value in OCR1A Register To make Timer Over Flow at This Value */
/* Fun. Argument1: Copy_u8CompareMatchValue  { from  0  To  65,535 }  [16 BIT]                   */
/* Fun. Return : void                                                                            */
/*************************************************************************************************/
void TIMER1_voidSetCompareMatchValue_T1A ( u16 Local_u16CompareMatchValue );

/*************************************************************************************************/
/* Function Name : TIMER1_voidSetCompareMatchValue_T1B                                           */
/* Description : Set Compare Match Value in OCR1B Register To make Timer Over Flow at This Value */
/* Fun. Argument1: Copy_u8CompareMatchValue  { from  0  To  65,535 }  [16 BIT]                   */
/* Fun. Return : void                                                                            */
/*************************************************************************************************/
void TIMER1_voidSetCompareMatchValue_T1B ( u16 Local_u16CompareMatchValue );

/************************************************************************************************/
/* Function Name : TIMER1_voidTalaat_u16PWM_T1A                                                  */
/* Description : Configrable TOP Value and Compare match Value To Make Special PWM              */
/*               Set TOP Value in ICR1A Register to OVF at This Value.                          */
/*               and Set Compare Match Value in OCR1A Register To make PWM at PIN OC1A          */
/* Fun. Argument1: Local_u8CompareMatchValue  { from  0  To  65,535 }  [16 BIT]                 */
/* Fun. Argument1: Copy_u16TopValue           { from  0  To  65,535 }  [16 BIT]                 */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER1_voidTalaat_u16PWM_T1A ( u16 Copy_u16CompareMatchValue , u16 Copy_u16TopValue );

/************************************************************************************************/
/* Function Name : TIMER1_voidTalaat_u16PWM_T1B                                                  */
/* Description : Configrable TOP Value and Compare match Value To Make Special PWM              */
/*               Set TOP Value in ICR1B Register to OVF at This Value.                           */
/*               and Set Compare Match Value in OCR1B Register To make PWM at PIN OC1B          */
/* Fun. Argument1: Local_u8CompareMatchValue  { from  0  To  65,535 }  [16 BIT]                 */
/* Fun. Argument1: Copy_u16TopValue           { from  0  To  65,535 }  [16 BIT]                 */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void TIMER1_voidTalaat_u16PWM_T1B ( u16 Copy_u16CompareMatchValue , u16 Copy_u16TopValue );


#endif /* COTS_MCAL_TIMERS_TIMER0_TIMER0_INTERFACE_H_ */
