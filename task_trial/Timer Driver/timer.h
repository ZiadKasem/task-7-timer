#include "../register.h"
#include "../types.h"

void Timer_init(uint32_t Timer_val);
// starts the timer counter
// Timer_config is in hexadecimal
void Timer_start();
// stops the timer using Timer_CTRL register
void Timer_stop();
//give value to timer to start from
void Timer_set_value(uint32_t value);
//check if the timer reached the target or not yet
int Timer_get_state(uint32_t target);