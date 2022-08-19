int vib_pin=2;
int led_pin=13;
void setup() {
  pinMode(vib_pin,INPUT);
  pinMode(led_pin,OUTPUT);
 Serial.begin(9600); 
}

void loop() {
  int val;
  val=digitalRead(vib_pin);
  Serial.println(val);
}
