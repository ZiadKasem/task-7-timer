/*
 * dio.c
 *
 * Created: 9/13/2022 9:14:10 AM
 *  Author: ziadk
 */ 

//including .h
#include "dioh.h"
// global variables
//functions definitions
void DIO_init(uint8_t pinNumber, uint8_t portNumber , uint8_t direction){//initialize dio direction of pin
	
	switch (portNumber)
	{
		case PORT_A:
			if (direction == IN)
			{
				DDRA &=~(1<<pinNumber);
			}
			else if (direction == OUT){
				DDRA |= (1<<pinNumber);
			}
			else{
				//error Handling
			}
		break;
		
		case PORT_B:
			if (direction == IN)
			{
				DDRB &=~(1<<pinNumber);
			}
			else if (direction == OUT){
				DDRB |= (1<<pinNumber);
			}
			else{
				//error Handling
			}
			break;
			
		case PORT_C:
			if (direction == IN)
			{
				DDRC &=~(1<<pinNumber);
			}
			else if (direction == OUT){
				DDRC |= (1<<pinNumber);
			}
			else{
				//error Handling
			}
			break;
		case PORT_D:
			if (direction == IN)
			{
				DDRD &=~(1<<pinNumber);
			}
			else if (direction == OUT){
				DDRD |= (1<<pinNumber);
			}
			else{
				//error Handling
			}
			break;
	}
	
}
void DIO_write(uint8_t pinNumber, uint8_t portNumber , uint8_t value){// write data on dio pin
switch (portNumber)
{
	case PORT_A:
	if (value == LOW)
	{
		PORTA &=~(1<<pinNumber);
	}
	else if (value == HIGH){
		PORTA |= (1<<pinNumber);
	}
	else{
		//error Handling
	}
	break;
	
	case PORT_B:
	if (value == LOW)
	{
		PORTB &=~(1<<pinNumber);
	}
	else if (value == HIGH){
		PORTB |= (1<<pinNumber);
	}
	else{
		//error Handling
	}
	break;
	
	case PORT_C:
	if (value == LOW)
	{
		PORTC &=~(1<<pinNumber);
	}
	else if (value == HIGH){
		PORTC |= (1<<pinNumber);
	}
	else{
		//error Handling
	}
	break;
	case PORT_D:
	if (value == LOW)
	{
		PORTD &=~(1<<pinNumber);
	}
	else if (value == HIGH){
		PORTD |= (1<<pinNumber);
	}
	else{
		//error Handling
	}
	break;
}


}
void DIO_Toggle(uint8_t pinNumber, uint8_t portNumber);//toggle the dio pin
void DIO_read(uint8_t pinNumber, uint8_t portNumber,uint8_t* value){//read dio pin

	switch(portNumber)
	{
		case PORT_A:
			*value = (PINA &(1<<pinNumber))>>pinNumber;
		break;
		case PORT_B:
			*value = (PINB &(1<<pinNumber))>>pinNumber;
		break;
		case PORT_C:
			*value = (PINC &(1<<pinNumber))>>pinNumber;
		break;
		case PORT_D:
			*value = (PIND &(1<<pinNumber))>>pinNumber;
		break;
		default:
		//Error Handling
		break; 
	}


}