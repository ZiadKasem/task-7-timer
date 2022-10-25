/*
 * button.c
 *
 * Created: 9/13/2022 2:47:11 PM
 *  Author: ziadk
 */ 

//including
#include "button.h"

void BUTTON_init(uint8_t buttonport,uint8_t buttonpin){
	DIO_init(buttonpin,buttonport,IN);
}
void BUTTON_read(uint8_t buttonport,uint8_t buttonpin, uint8_t *value)
{
	DIO_read(buttonpin,buttonport,value);
	
}
