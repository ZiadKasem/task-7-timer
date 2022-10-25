/*
 * register.h
 *
 * Created: 9/13/2022 8:43:18 AM
 *  Author: ziadk
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_

#include "types.h"
/************************************************************************/
/*      DIO Registers                                                                */
/************************************************************************/

//PORTA 
#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)

//PORTB
#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)

//PORTC
#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)

//PORTD
#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)
 
/************************************************************************/
/* Timer0 Registers                                                                  */
/************************************************************************/\
#define TCCR0 *((volatile uint8_t*)0x53)
#define TCNT0 *((volatile uint8_t*)0x52)
#define TIFR *((volatile uint8_t*)0x58)

#endif /* REGISTER_H_ */