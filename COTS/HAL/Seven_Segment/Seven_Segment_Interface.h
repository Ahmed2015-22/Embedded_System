/*=================================================================================*/
/*  File        : Seven_Segment_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/7/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/

#ifndef COTS_HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_INTERFACE_H_
#define COTS_HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_INTERFACE_H_


#include "../../MCAL/DIO/DIO_Interface.h"

void Seven_Seg_Initialization();

void Seven_Seg_Write(u8 number);

void Seven_Seg_Enable1();

void Seven_Seg_Enable2();

void Seven_Seg_Disable1();

void Seven_Seg_Disable2();


#endif /* COTS_HAL_SEVEN_SEGMENT_SEVEN_SEGMENT_INTERFACE_H_ */
