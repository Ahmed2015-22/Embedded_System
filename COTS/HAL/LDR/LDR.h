/*=================================================================================*/
/*  File        : LDR.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/17/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_HAL_LDR_LDR_H_
#define COTS_HAL_LDR_LDR_H_

#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../MCAL/ADC/ADC_Interface.h"

void LDR_init(u8 Channel_Number);

u16 LDR_Get_Brightness(u8 Channel_Number);

#endif /* COTS_HAL_LDR_LDR_H_ */
