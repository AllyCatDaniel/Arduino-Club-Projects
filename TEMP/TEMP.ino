//Austin Arduino Group
// This code is written by Daniel Morley
// 2/18/2019
// Used on Seeedduino but should be good for UNO or clone
//Use the TMP37FT9Z to computate temp -40 C to 125 C

int AnalogPortPin = A0;    

float TempSensorRaw = 0;  // variable to store the value coming from the sensor

void setup() {
  Serial.begin(9600);
  Serial.println("Program is on");
}

void loop() {
  float voltage;
  float TempC;
  // read the value from the  TMP37FT9Z  sensor:
  TempSensorRaw = analogRead(AnalogPortPin);
  voltage= (TempSensorRaw * 5 )/1023;
  Serial.print("The Voltage at A0 is ");
  Serial.print(voltage);
  Serial.println(" V");
  
  TempC=voltage/.02;
  
  Serial.print("The Temp at C is ");
  Serial.print(TempC);
  Serial.println(" C");
    
  delay(10000);

  //Bonus is to covert to fahrenheit and display
}
