/*
 * button.h
 *
 * Created: 9/13/2022 2:47:38 PM
 *  Author: ziadk
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include"../DIO Driver/dioh.h"
#define BUTTON_1_PORT PORT_A
#define BUTTON_0_PIN 0
//BUTTON STATE MACCROS
#define BUTTON_STATE_LOW 0
#define BUTTON_STATE_HIGH 1

//functions prototype
void BUTTON_init(uint8_t buttonport,uint8_t buttonpin);
void BUTTON_read(uint8_t buttonport,uint8_t buttonpin, uint8_t *value);




#endif /* BUTTON_H_ */