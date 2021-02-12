#include "../lib/uopmsb/uop_msb_2_0_0.h"
using namespace uop_msb_200;

// Create a DigitalOut “object” called greenLED. Pass constant LED1 as a “parameter”
DigitalOut greenLED(LED1);

//These are "commented out" and so are not part of the program. You can uncomment them by removing the // characters
//Your task is to make a sequence alternating between Green+Red and just Blue 
DigitalOut blueLED(LED2);
DigitalOut redLED(LED3);

//The main function - all executable C / C++ applications have a main function. This is our entry point in the software
int main() 
{
    // Write a message to the terminal
    puts("Welcome to your Nucleo board");

    int waitTime = 250000;

    // ALL the repeating code is contained in a  “while loop”
    while(true) 
    { 
        //The code between the { curly braces } is the code that is repeated forever

        // Turn onboard LED ON  (Green and red)
        greenLED = 1; 
        redLED = 1;
        // Make sure LED is off (Blue)
        blueLED = 0;

        // Wait 1 second (1 million microseconds)
<<<<<<< HEAD
        wait_us(waitTime); 
=======
        wait_us(500000); 
>>>>>>> 02a9d2f7d296c7b5b2812d03322706f4846cd73b

        // Turn LED OFF (Green and Red)
        greenLED = 0;
        redLED = 0;
        // Turn LED on (Blue)
        blueLED = 1;

        // Wait 1 second
<<<<<<< HEAD
        wait_us(waitTime); 
=======
        wait_us(500000); 
>>>>>>> 02a9d2f7d296c7b5b2812d03322706f4846cd73b
    }
}