#include "timer.h"
#include <math.h>
//initial value given to register TCNTO
//Timer_val is in hexadecimal
void Timer_init(uint32_t Timer_val){
	TCNT0 = Timer_val;//value register
}

//starts the timer using TCCRO register
//set the prescaler
void Timer_start(){
	TCCR0=0x05;//CONTROLER
}
// stops the timer 
void Timer_stop(){
	TCCR0 = 0;
}
// sets the timer value to a certain time
void Timer_set_value(uint32_t value){
	TCNT0 = value;
}
// check if timer state reached the target or not yet
int Timer_get_state(uint32_t target){
	// loop to stay in the function until the timer reaches the target
	while(1){
		// if timer reaches 255 and didn't reach the target , it will restart from 0.
		if (TCNT0 == 0xff || TCNT0 == target){
			if(target - TCNT0 >0){				// target > max value of timer
				Timer_set_value(0x00);			//restart the timer 
				target -= 256;  //new target = the same as old but with decreaseing 256
				}else{										//else means the timer reached the target
				return 0;
			}
		}
	}
}