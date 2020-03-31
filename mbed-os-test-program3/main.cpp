#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

void Led(DigitalOut& ledpin,int j);

int main()
{
   redLED = 1;
   greenLED = 1;
   while (true) {
       Led(redLED,6);
       Led(greenLED,4);
   }
}

void Led(DigitalOut& ledpin,int j)
{
   for(int i=0; i<j; ++i) { //blink for 6 times
       ledpin = !ledpin; // toggle led
       wait(0.2f);
   }
}