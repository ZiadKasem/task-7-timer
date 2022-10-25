/*
 * task_trial.c
 *
 * Created: 9/13/2022 8:32:14 AM
 * Author : ziadk
 */ 


/************************************************************************/
/* step 1 build register and type files
   step 2 build your  driver library(.c & .h)                                                                       */
/************************************************************************/

//#include <avr/io.h>
#include "register.h"
//#include "DIO Driver/dioh.h" // moved to led.h
#include "LED Driver/led.h"
#include "BUTTON Driver/button.h"
#include "Timer Driver/timer.h"

int main(void)
{	
	
	uint32_t Timer_init_val;
	//unsigned int overflowCounter =0;
	
	LED_init(PORT_C,0);//led1
	
	// choose timer mode
	TCCR0 = 0x00;// normal mode
	Timer_init_val = 0;
	Timer_init(Timer_init_val);//set initial value
	
    while(1){
		LED_off(PORT_C,0);
		Timer_start();
		Timer_get_state(300);
		Timer_stop();
		LED_on(PORT_C,0);
		Timer_start();
		Timer_get_state(500);
		Timer_stop();
	}
	
}



/*
//Timer start  -> set prescaler  step 1
TCCR0 |= (1<<0);
while (overflowCounter < no_of_overflows)
{
	// stop after one overflow -> 256 micro sec
	// check for interrupt flag
	while((TIFR &(1<<0)) == 0);
	
	//clear the overflow flag
	TIFR |= (1<<0);
	overflowCounter++;
}
overflowCounter =0;

//Timer stop
TCCR0 = 0x00;

*/