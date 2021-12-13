
#include <Servo.h>

int buttonPin = 3;
int buttonState;

Servo ESC1;  //


void setup()
{

    // Attach the ESC on pin 9
  ESC1.attach(9,1000,2000); // (pin, min pulse width, max pulse width in microseconds)
}


// Main loop, read and display data
void loop()
{
  //digitalRead(buttonPin);
  buttonState = digitalRead(buttonPin);
  if(buttonState == 1){
  ESC1.write(90);
  } else {
    ESC1.write(0);
  }
    
    
}
