#include "buzzer.h"
#include "common_macros.h"
#include "gpio.h"
#include "uart.h"
#include "messages.h"

void buzzer_init(void){
	GPIO_setupPinDirection(buzzer_PORT,buzzer_pin,PIN_OUTPUT);
	GPIO_writePin(buzzer_PORT,buzzer_pin,LOGIC_LOW);
}

void buzzerON(void){
	GPIO_writePin(buzzer_PORT,buzzer_pin,LOGIC_HIGH);
}


void buzzerOff(void) {
	GPIO_writePin(buzzer_PORT,buzzer_pin,LOGIC_LOW);
	UART_sendByte(returnMainOptions);
}
