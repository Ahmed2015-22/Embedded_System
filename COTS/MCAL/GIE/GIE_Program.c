/*=================================================================================*/
/*  File        : GIE_Program.c                                                       */
/*  Author      : Ahmed Talaat El-Sharkawi. Embedded SW Engineer                      */
/*  Date        : 11/11/2023                                                        */
/*  Linkedin    : https://www.linkedin.com/in/ahmed-el-sharkawi-1a5b0524b/                        */
/*  mail        : mido.eng222@gmil.com                                         */
/*=================================================================================*/


#include "GIE_Interface.h"

void GIE_Enable(void)
{
	SET_BIT(SREG_Reg,GIE_ENABLE_BIT);
}

/* Function to disable global interrupt */
void GIE_Disable(void)
{
	CLR_BIT(SREG_Reg,GIE_ENABLE_BIT);
}

