int b = 1000;
int ina;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200,SERIAL_8N1);
}

// the loop function runs over and over again forever
void loop() {
  if (Serial.available() > 0){
  ina = Serial.read();
  Serial.println(ina);
  if (ina = 'a'){
  b = b-100;}
  else if (ina='b'){
  b= b+100;}
  else
  b=b;
  Serial.print("delay in ms =: ");
  Serial.println(b);}
 
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("led on");
  //Serial.println(b);
  delay(b);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);// turn the LED off by making the voltage LOW
 Serial.println("led off");
 // Serial.println(b);
  delay(b);                       // wait for a second
}
