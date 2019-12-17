#include <PRIZM.h>
#include <TELEOP.h>

PRIZM prizm;
PS4 ps4;

int PowerM1;
int PowerM2;


void setup() {
  prizm.PrizmBegin();
  prizm.setMotorInvert(2,1);
  prizm.setServoPosition(2,180);
  prizm.setServoPosition(6,120);
  
  prizm.setServoSpeed(2,30);
  prizm.setServoSpeed(6,50);
  
  ps4.setDeadZone(LEFT, 10);
  ps4.setDeadZone(RIGHT, 10);

}


void loop() {
  ps4.getPS4();

  if (ps4.Connected){
    PowerM1 = ps4.Motor(RY);
    PowerM2 = ps4.Motor(LY);
    prizm.setMotorPowers(PowerM1, PowerM2);

    if (ps4.Button(L2)==1){
      prizm.setServoPosition(2,120);
    }
    else{
      prizm.setServoPosition(2,180);
    }

    if (ps4.Button(R2)==1){
      prizm.setServoPosition(6,60);
    }
    else{
      prizm.setServoPosition(6,120);
    }

    
  }
  
  else{
    prizm.setMotorPowers(0,0);
    prizm.setServoPosition(2,180);
    prizm.setServoPosition(6,120);
  }

}
