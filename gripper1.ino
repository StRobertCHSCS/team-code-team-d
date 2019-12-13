#include <PRIZM.h>
PRIZM prizm;

void setup() {

  prizm.PrizmBegin();
  prizm.setServoSpeed(1,25);
}

void loop() {     // repeat in a loop

  prizm.setServoPosition(1,180);  // rotate servo1 to 180 degrees
  delay(3000);                    // 1 second to get to position 180
                                  // 2 seconds of rest
  prizm.setServoPosition(1,0);    // rotate servo1 to 0 degrees
  delay(3000);                    // 1 second to get to position 0
                                  // 2 seconds of rest
 
}
