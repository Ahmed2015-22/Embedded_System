/*=================================================================================*/
/*  File        : LM35.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/17/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_HAL_LM35_LM35_H_
#define COTS_HAL_LM35_LM35_H_

#include "../../MCAL/DIO/DIO_Interface.h"
#include "../../MCAL/ADC/ADC_Interface.h"

void LM35_init(u8 Channel_Number);

u8 LM35_Get_Temp(u8 Channel_Number);

#endif /* COTS_HAL_LM35_LM35_H_ */
