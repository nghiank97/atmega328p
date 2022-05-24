

#ifndef SPI_H_
#define SPI_H_
#include "style.h"

/*
    SPI pin
    Don't edit
*/   

// SPI as master

#define SS_PIN                                      2           // 10
#define MOSI_PIN                                    3           // 11
#define MISO_PIN                                    4           // 12
#define SCLK_PIN                                    5           // 13

#define DIR_SPI                                     DDRB
#define PORT_SPI                                    PORTB

/* CLOCK SPI : only choose one*/

// #define SPI_CLOCK                                   (0<<SPR1)|(0<<SPR0)        // div 4
#define SPI_CLOCK                                   (0<<SPR1)|(1<<SPR0)        // div 16
// #define SPI_CLOCK                                   (1<<SPR1)|(0<<SPR0)        // div 64
// #define SPI_CLOCK                                   (1<<SPR1)|(1<<SPR0)        // div 128

// #define SPI_MODE                                    (0<<CPOL)|(0<<CPHA)         // mode 0
 #define SPI_MODE                                    (0<<CPOL)|(1<<CPHA)         // mode 1
// #define SPI_MODE                                    (1<<CPOL)|(0<<CPHA)         // mode 2
// #define SPI_MODE                                    (1<<CPOL)|(1<<CPHA)         // mode 3

/* was defined in define.h */
#ifdef                                              SPI_MASTER

#define SPI_ENABLE()                                {CLR(PORT_SPI,SS_PIN);}
#define SPI_DISENABLE()                             {SET(PORT_SPI,SS_PIN);}

extern void spi_init(int intp);
extern void spi_byte(uint8_t data);
extern void spi_put(uint8_t data);
extern void spi_puts(uint8_t *datas,int len);
extern uint8_t spi_transfer(uint8_t data);
extern void spi_word(uint16_t data);

#endif

#endif