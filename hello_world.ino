/*  PRIZM Controller example program
 *  Blink the PRIZM red LED at a 1 second flash rate
 *  author PWU on 08/05/2016
*/
  
  #include <PRIZM.h>      // include the PRIZM library

  PRIZM prizm;            // instantiate a PRIZM object "prizm" so we can use its functions

void setup() {

   prizm.PrizmBegin();   // initialize the PRIZM controller

}

void loop() {     // repeat this code in a loop
  
  for (int i = 0; i <= 2; i++) { // three 0.5 second flashes
    prizm.setRedLED(HIGH);    // turn the RED LED on
    delay(500);              // wait here for 500ms (0.5 second)
    prizm.setRedLED(LOW);     // turn the RED LED off
    delay(500);              // wait here for 500ms (0.5 second)
  } 
  
  for (int i = 0; i <= 1; i++) { // two 1 second flashes
    prizm.setGreenLED(HIGH);    // turn the GREEN LED on
    delay(1000);              // wait here for 1000ms (1 second)
    prizm.setGreenLED(LOW);     // turn the GREEN LED off
    delay(1000);              // wait here for 1000ms (1 second)
  }
}
