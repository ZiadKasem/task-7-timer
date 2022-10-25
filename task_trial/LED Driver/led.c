/*
 * led.c
 *
 * Created: 9/13/2022 12:51:21 PM
 *  Author: ziadk
 */ 

#include "led.h"

//functions definition
void LED_init(uint8_t ledport,uint8_t ledpin){
	DIO_init(ledpin,ledport,OUT);
}
void LED_on(uint8_t ledport,uint8_t ledpin){
	DIO_write(ledpin,ledport,HIGH);
}
void LED_off(uint8_t ledport,uint8_t ledpin){
	DIO_write(ledpin,ledport,LOW);
}
void LED_toggle(uint8_t ledport,uint8_t ledpin){
	uint8_t value;
		DIO_read(ledpin,ledport,&value);
		if(value == 1){
			DIO_write(ledpin,ledport,LOW);
		}
		else{
			DIO_write(ledpin,ledport,HIGH);
		}
	
}