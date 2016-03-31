#include "Arduino.h"
#include "Tiva.h"

uint8_t PWM_PIN[8];

uint8_t Tiva_PCINT_RX_PORT;
uint8_t Tiva_PCINT_RX_MASK;
uint8_t Tiva_PCICR;
uint8_t Tiva_SREG;

//clear interrupts
void cli(){

}

