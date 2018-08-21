

//Created by:akshatha //
//date      :21/8/2018//
//Topic     :ultrasonic sensor control//









// defines pins numbers
const int trigPin = 9;//intialize the trigpin//
const int echoPin = 10;//intialize the echopin//
int led11=5;           //intialize led11//
int led22=6;          //intialize led22//
void led1();
void led2();
// defines variables
int duration;
int distance;
void setup() {
pinMode(trigPin, OUTPUT);                    // Sets the trigPin as an Output
pinMode(echoPin, INPUT);                       // Sets the echoPin as an Input
Serial.begin(9600);                       // Starts the serial communication
}
void loop() {
                                   // Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
                            // Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
delay(200);
if(distance<10){
led1();
Serial.println("n"); 
}
else if(10< distance <20){
  led2();
  Serial.println("s");
}
else{
  digitalWrite(led11,LOW);//making led11 low//
  delay;
  digitalWrite(led22,LOW);//making led11 low//
  delay;
  
}
}
void led1()
{
  Serial.println("led11 on"); //printing as led22on//
  digitalWrite(led11,HIGH);
  delay(200);
   digitalWrite(led11,LOW);
   delay(200);
}
void led2()
{
Serial.println("led22 on");
  digitalWrite(led22,HIGH);
  delay(200);
   digitalWrite(led22,LOW);
   delay(200);
}


