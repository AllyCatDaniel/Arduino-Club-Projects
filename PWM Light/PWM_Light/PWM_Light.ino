//Code written by Daniel Morley for the Austin Arduino Group
//Use this for anything you want

int led = 11;   //Pin for LED
int lightintensity = 0; //Intesity of light
int fade = 1;   //The amount of steps
void setup() {

  pinMode(led, OUTPUT);
}


void loop() {
  analogWrite(led, lightintensity);// Adjust the duty cyle of the PWM
  
  lightintensity = lightintensity + fade;//increments the variable by a step each pass
  
                       
  
  if (lightintensity <= 0 || lightintensity >= 255) {
    fade = -fade;   // Act as decrement step when max intesisty is reached
  }
   delay(5); // Cycle Delay
}
