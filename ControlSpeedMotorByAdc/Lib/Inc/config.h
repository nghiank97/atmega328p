
#include "bee.h"
#ifndef CONFIG_H_
#define CONFIG_H_

#define CLOCK_DIV_ENABLE                            _bv(CLKPCE)
#define CLOCK_DIV_1                                 (0<<CLKPCE) | (0<<CLKPS3) | (0<<CLKPS2) | (0<<CLKPS1) | (0<<CLKPS0)
        
#define CONFIG_CLOCK()                              {CLKPR=CLOCK_DIV_ENABLE; CLKPR=CLOCK_DIV_1;}

#define BAUD_RATE                                   9600
#define BAUD_PRESCALE                               (uint16_t)((F_CPU/16/BAUD_RATE) - 1)

/* LCD */

//#define LCD16x2
// #define LCD20x4
#define LCD16x4
#define RS_LCD                                      0
//#define RW_LCD                                      1
#define EN_LCD                                      1
#define PORT_CONTROL_LCD                            PORTB
#define DIR_CONTROL_LCD                             DDRB

#define FIR_LCD                                     4
#define SEC_LCD                                     5
#define THI_LCD                                     6
#define FOR_LCD                                     7
#define PORT_DATA_LCD                               PORTD
#define DIR_DATA_LCD                                DDRD

/* Interrupt external channel */

#define RESOLUTION_ENCODER                          100

#define CHANNEL_0                                   0
#define CHANNEL_1                                   1

#define ENCODER_0                                   2
#define ENCODER_1                                   3

#define DIR_ENCODER                                 DDRD
#define PORT_ENCODER                                PORTD
#define PIN_ENCODER                                 PIND

/* PWM */
#define PWM_2

#endif