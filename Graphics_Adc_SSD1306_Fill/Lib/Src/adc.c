
#include "../Inc/adc.h"

extern void adc_init(void){
    ADCSRA |= (1<<ADEN)|(7<<ADPS0);
    ADMUX |= (0<<REFS1)|(0<<REFS0)|(0<<ADLAR);   
}

extern uint16_t adc_get(uint8_t adc_channel){
    ADMUX =(ADMUX&0xF0)|(adc_channel&0x0F);   
    ADCSRA |= (1<<ADSC);   
    while((ADCSRA&(1<<ADIF)) == 0);
    return ADCW;
} 
