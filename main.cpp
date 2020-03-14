#include "mbed.h"

DigitalOut redLED(LED1);        // set redLED output
DigitalOut greenLED(LED2);      // set greenLED output

int main(void)
{
    while(1){
        redLED = 1;         // turn on greedLED for 0.2s 
        greenLED = 0;
        wait(0.2);
        redLED = 0;         // turn on redLED for 0.2s
        greenLED = 1;
        wait(0.2);
    }

    return 0;
}