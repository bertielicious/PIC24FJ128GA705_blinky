
#include "pic24type.h"

void configPorts(void)
{
   // RPOR2bits.RP4R = LOW;
    
    /****************************************************************************
     * Setting the Open Drain SFR(s)
     ***************************************************************************/
    ODCA = 0x0000;
    ODCB = 0x0000;
    ODCC = 0x0000;
     /****************************************************************************
     * Setting the Analog/Digital Configuration SFR(s)
     ***************************************************************************/
    ANSA = 0x0000;
    ANSB = 0x0000;
    ANSC = 0x0000;
   // ODCBbits.ODCB4 = HIGH;
    
    
   
    TRISBbits.TRISB4 = OUTPUT;
    TRISCbits.TRISC3 = OUTPUT;
    TRISCbits.TRISC4 = OUTPUT;
    TRISCbits.TRISC5 = OUTPUT;
    
   /* TRISBbits.TRISB4 = INPUT;
    TRISCbits.TRISC3 = INPUT;
    TRISCbits.TRISC4 = INPUT;
    TRISCbits.TRISC5 = INPUT;*/
}
