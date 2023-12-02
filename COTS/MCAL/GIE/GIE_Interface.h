/*=================================================================================*/
/*  File        : GIE_Interface.h                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/11/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#ifndef COTS_MCAL_GIE_GIE_INTERFACE_H_
#define COTS_MCAL_GIE_GIE_INTERFACE_H_

#include "GIE_Config.h"
#include "GIE_Private.h"
#include "../../MCAL/DIO/DIO_Interface.h"

/* Function to enable global interrupt */
void GIE_Enable(void);

/* Function to disable global interrupt */
void GIE_Disable(void);

#endif /* COTS_MCAL_GIE_GIE_INTERFACE_H_ */
