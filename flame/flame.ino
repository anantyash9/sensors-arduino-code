/*******
 
 All the resources for this project:
 https://www.hackster.io/Aritro

*******/

int flameA0 = A5;

void setup() {
  pinMode(flameA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(flameA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor < 200)
  {
    Serial.println("flame!!");
  }
  delay(100);
}
