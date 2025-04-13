//Importing servo library
#include <Servo.h>

//Digital Pin Assigment
#define LeftArm 4
#define RightArm 6
#define LeftFoot 7
#define RightFoot 8
#define LeftLeg 2
#define RightLeg 3

//Assigning Servo Variables
Servo leftLeg;
Servo rightLeg;
Servo leftFoot;
Servo rightFoot;
Servo leftArm;
Servo rightArm;

void setup() {

//Attaching/activating the servos
 leftLeg.attach(LeftLeg);
 rightLeg.attach(RightLeg);
 leftFoot.attach(LeftFoot);
 rightFoot.attach(RightFoot);
 leftArm.attach(LeftArm);
 rightArm.attach(RightArm);

//Positioning the servos to starting/normal position
 leftLeg.write(90);
 rightLeg.write(90);
 leftFoot.write(90);
 rightFoot.write(90);
 leftArm.write(90);
 rightArm.write(90);
 delay(1000);

//Detach before starting program and save power
 leftLeg.detach();
 rightLeg.detach();
 leftFoot.detach();
 rightFoot.detach();
 leftArm.detach();
 rightArm.detach();
}

void loop() {

//Foot dance movement
  for (int i = 0; i < 5; i++) {
    //Move right foot forward
    rightFoot.attach(RightFoot);
    rightFoot.write(120);
    delay(150);
    rightFoot.detach();
    delay(250);

    // Move left foot forward
    leftFoot.attach(LeftFoot);
    leftFoot.write(120);
    delay(100);
    leftFoot.detach();
    delay(250);

    // Move right foot backward
    rightFoot.attach(RightFoot);
    rightFoot.write(60);
    delay(150);
    rightFoot.detach();
    delay(250);

    // Move left foot backward
    leftFoot.attach(LeftFoot);
    leftFoot.write(60);
    delay(100);
    leftFoot.detach();
    delay(250);
  }

//Delay before next dance move
  delay(500);

//Arm dance movement
  for (int i = 0; i < 5; i++) {
    // Move right arm forward
    rightArm.attach(RightArm);
    rightArm.write(120);
    delay(300);
    rightArm.detach();
    delay(250);

    // Move left arm forward
    leftArm.attach(LeftArm);
    leftArm.write(120);
    delay(300);
    leftArm.detach();
    delay(250);

    // Move right arm backward
    rightArm.attach(RightArm);
    rightArm.write(60);
    delay(300);
    rightArm.detach();
    delay(250);

     // Move left arm backward
    leftArm.attach(LeftArm);
    leftArm.write(60);
    delay(300);
    leftArm.detach();
    delay(250);
  }

//Delay before next dance move
  delay(500); 

//Leg dance movement
  for (int i = 0; i < 5; i++) {
    // Move right leg forward
    rightLeg.attach(RightLeg);
    rightLeg.write(120);
    delay(150);
    rightLeg.detach();
    delay(250);

    // Move left leg forward
    leftLeg.attach(LeftLeg);
    leftLeg.write(120);
    delay(100);
    leftLeg.detach();
    delay(250);

    // Move right leg backward
    rightLeg.attach(RightLeg);
    rightLeg.write(60);
    delay(150);
    rightLeg.detach();
    delay(250);

    // Move left leg backward
    leftLeg.attach(LeftLeg);
    leftLeg.write(60);
    delay(100);
    leftLeg.detach();
    delay(250);
  }
  
}