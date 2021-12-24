
#include "bee.h"
#ifndef CONFIG_H_
#define CONFIG_H_

#define CLOCK_DIV_ENABLE                            _bv(CLKPCE)
#define CLOCK_DIV_1                                 (0<<CLKPCE) | (0<<CLKPS3) | (0<<CLKPS2) | (0<<CLKPS1) | (0<<CLKPS0)
        
#define CONFIG_CLOCK()                              {CLKPR=CLOCK_DIV_ENABLE; CLKPR=CLOCK_DIV_1;}

/* OLED */

#define GLCD_SIZE                                   GLCD_128_64

#define RESET_PIN                                   3
#define SDA_PIN                                     4
#define SCL_PIN                                     5

#define DIR_OLED                                    DDRC
#define PORT_OLED                                   PORTC

/* ADC */

#define CHANNEL_0                                   0

#endif
