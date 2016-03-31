

//Alarms.cpp
#define BUZZERPIN_OFF
#define LEDPIN_OFF
#define LEDPIN_ON
#define LEDPIN_TOGGLE

//EEPROM.cpp
#define eeprom_read_block(A,B,C)
#define eeprom_write_block(A,B,C)

//Multiwii.cpp
#define LEDPIN_PINMODE
#define POWERPIN_PINMODE
#define BUZZERPIN_PINMODE
#define STABLEPIN_PINMODE
#define POWERPIN_OFF

//Output.cpp
extern uint8_t PWM_PIN[8];

//RX.cpp
#define ROLLPIN       PB_3
#define PITCHPIN      PC_4
#define YAWPIN        PC_5
#define THROTTLEPIN   PC_6
#define AUX1PIN       PC_7
#define AUX2PIN       PD_6
#define AUX3PIN       PD_7
#define AUX4PIN       PF_4
#define PCINT_PIN_COUNT  8
#define PCINT_RX_BITS
extern uint8_t Tiva_PCINT_RX_PORT;
extern uint8_t Tiva_PCINT_RX_MASK;
#define PCINT_RX_PORT  Tiva_PCINT_RX_PORT
#define PCINT_RX_MASK  Tiva_PCINT_RX_MASK
extern uint8_t Tiva_PCICR;
#define PCICR Tiva_PCICR
#define PCIR_PORT_BIT 0
extern uint8_t Tiva_SREG;
#define SREG Tiva_SREG
void cli();

//Sensors.cpp



