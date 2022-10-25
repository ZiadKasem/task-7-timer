/*
 * dioh.h
 *
 * Created: 9/13/2022 9:14:22 AM
 *  Author: ziadk
 */ 


#ifndef DIOH_H_
#define DIOH_H_
//include registers.h
#include "../register.h"

// all internal driver typedefs
// all driver macros
#define PORT_A 'A' 
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
//DIRECTIONS DEFINES
#define IN 0
#define OUT 1
//VALUES DEFINES
#define HIGH 1
#define LOW 0

// all driver functions prototypes
void DIO_init(uint8_t pinNumber, uint8_t portNumber , uint8_t direction);//initialize dio direction of pin
void DIO_write(uint8_t pinNumber, uint8_t portNumber , uint8_t value);// write data on dio pin
void DIO_Toggle(uint8_t pinNumber, uint8_t portNumber);//toggle the dio pin
void DIO_read(uint8_t pinNumber, uint8_t portNumber,uint8_t* value);//read dio pin

#endif /* DIOH_H_ */