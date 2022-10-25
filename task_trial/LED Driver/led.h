/*
 * led.h
 *
 * Created: 9/13/2022 12:51:37 PM
 *  Author: ziadk
 */ 


#ifndef LED_H_
#define LED_H_

//including DIO
#include "../DIO Driver/dioh.h"

//macros function
//led1
#define Led_1_on LED_on(PORT_C,0);
#define Led_1_off LED_off(PORT_C,0);
//led2
#define Led_2_on LED_on(PORT_C,1);
#define Led_2_off LED_off(PORT_C,1);
//led3
#define Led_3_on LED_on(PORT_C,2);
#define Led_3_off LED_off(PORT_C,2);



//functions prototype
void LED_init(uint8_t ledport,uint8_t ledpin);
void LED_on(uint8_t ledport,uint8_t ledpin);
void LED_off(uint8_t ledport,uint8_t ledpin);
void LED_toggle(uint8_t ledport,uint8_t ledpin);

#endif /* LED_H_ */