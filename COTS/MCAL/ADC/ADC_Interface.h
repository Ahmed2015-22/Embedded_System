/*=================================================================================*/
/*  File        : ADC_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/12/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_MCAL_ADC_ADC_INTERFACE_H_
#define COTS_MCAL_ADC_ADC_INTERFACE_H_

#include "../../LIB/Bit_Math.h"
#include "../../LIB/STD_Types.h"
#include "ADC_Config.h"
#include "ADC_Private.h"


/************************************************************************************************/
/* Function Name : ADC_voidInit                                                                 */
/* Description : Initilization of ADC with Specific Specs accordig to Gonfigration File.h       */
/* Fun. Return : void                                                                           */
/************************************************************************************************/
void ADC_voidInit (void);
/************************************************************************************************/
/* Function Name : ADC_u16ReadSynchronus                                                        */
/* Description : Get Analog Reading From ADC                                                    */
/* Fun. Argument1: Copy_u8ChannelNumber { ADC0,ADC1,ADC2,ADC3,ADC4,ADC5,ADC6,ADC7 }             */
/* Fun. Return : u16                                                                            */
/************************************************************************************************/
u16 ADC_u16ReadSynchronus ( u8 Copy_u8ChannelNumber ) ;
u16 ADC_u16ReadASynchronus ( u8 Copy_u8ChannelNumber ,  void (*Local_PointerToFunction) (void) ) ;

#endif /* COTS_MCAL_ADC_ADC_INTERFACE_H_ */
