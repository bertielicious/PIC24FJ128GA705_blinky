/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 20 September 2022, 19:08
 */


#include <xc.h>
#include "pic24type.h"
#include "configurationBits.h"
#include "configOsc.h"
#include "configPorts.h"
#include <stdint.h>
int16_t main(void) 
{
   
    configOsc();
    configPorts();
    uint16_t i,j = 0;
    while(1)
    {
       
       
        LATBbits.LATB4 = LOW;
        LATCbits.LATC3 = HIGH;
        LATCbits.LATC4 = HIGH;
        LATCbits.LATC5 = HIGH;
       for (i = 0; i < 0xffff; i++);
       
      
      
       
        LATBbits.LATB4 = ~LOW;
        LATCbits.LATC3 = ~HIGH;
        LATCbits.LATC4 = ~LOW;
        LATCbits.LATC5 = ~LOW;
       for (i = 0; i < 0xffff; i++);
        
       
       
        LATBbits.LATB4 = ~LOW;
        LATCbits.LATC3 = ~LOW;
        LATCbits.LATC4 = ~HIGH;
        LATCbits.LATC5 = ~LOW;
       for (i = 0; i < 0xffff; i++);
       
       
       
        LATBbits.LATB4 = ~LOW;
        LATCbits.LATC3 = ~LOW;
        LATCbits.LATC4 = ~LOW;
        LATCbits.LATC5 = ~HIGH;
       for (i = 0; i < 0xffff; i++);
       
    }
    return 0;
}
