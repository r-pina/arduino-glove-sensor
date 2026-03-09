#define trig1 2
#define echo1 3
#define trig2 4
#define echo2 5
#define trig3 6
#define echo3 7
#define buzzer 8

void setup() {
//setup first ultrasonic sensor
pinMode(trig1, OUTPUT);
pinMode(echo1, INPUT);

//setup second ultrasonic sensor
pinMode(trig2, OUTPUT);
pinMode(echo2, INPUT);

//setup third ultrasonic sensor
pinMode(trig3, OUTPUT);
pinMode(echo3, INPUT);

//setup buzzer
pinMode(buzzer, OUTPUT);
}

void loop() {
digitalWrite(buzzer, LOW);//buzzer will be off
// First ultrasonic sensor
digitalWrite(trig1, LOW);
  delayMicroseconds(5);   
  digitalWrite(trig1, HIGH);
  delayMicroseconds(10);  
  digitalWrite(trig1, LOW); 
  int microseconds = pulseIn(echo1, HIGH);//measure how long echo was high in microseconds
  int inches = (microseconds*0.013386)/2; //convert to inches

// Second ultrasonic sensor
digitalWrite(trig2, LOW);
  delayMicroseconds(5);   
  digitalWrite(trig2, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trig2, LOW); 
  int microseconds2 = pulseIn(echo2, HIGH);//measure how long echo was high in microseconds
  int inches2 = (microseconds2*0.013386)/2; //convert to inches

// Third ultrasonic sensor
digitalWrite(trig3, LOW);
  delayMicroseconds(5);   
  digitalWrite(trig3, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trig3, LOW); 
  int microseconds3 = pulseIn(echo3, HIGH);//measure how long echo was high in microseconds
  int inches3 = (microseconds3*0.013386)/2; //convert to inches

  if(inches >= 0 && inches <= 6){ //checks if object is within 3 inches of first ultrasonic sensor and will beep one time if object is detected
    digitalWrite(buzzer, HIGH);
    delay(250);
  } else if(inches2 >= 0 && inches2 <= 6) { //checks if object is within 3 inches of second ultrasonic sensor and will beep two times if object is detected
    digitalWrite(buzzer, HIGH);
    delay(250);
    digitalWrite(buzzer, LOW);
    delay(250);
    digitalWrite(buzzer,HIGH);
    delay(250);
  } else if(inches3 >= 0 && inches3 <= 6){ //checks if object is within 3 inches of third ultrasonic sensor and will beep three times if object is detected
    digitalWrite(buzzer, HIGH);
    delay(250);
    digitalWrite(buzzer, LOW);
    delay(250);
    digitalWrite(buzzer,HIGH);
    delay(250);
    digitalWrite(buzzer, LOW);
    delay(250);
    digitalWrite(buzzer,HIGH);
    delay(250);
  }else if(inches >=0 && inches <=6 && inches2 >=0 && inches2 <=6 && inches3 >=0 && inches3 <=6){
    digitalWrite(buzzer,HIGH);
  }else if(inches >=0 && inches <=6 && inches2 >=0 && inches2 <=6){
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
    digitalWrite(buzzer,HIGH);
    delay(100);
  }else if(inches2 >=0 && inches2 <=6 && inches3 >=0 && inches3 <=6){
     digitalWrite(buzzer, HIGH);
    delay(50);
    digitalWrite(buzzer, LOW);
    delay(50);
    digitalWrite(buzzer,HIGH);
    delay(50);
    digitalWrite(buzzer, LOW);
    delay(50);
    digitalWrite(buzzer,HIGH);
    delay(50);
    digitalWrite(buzzer, LOW);
    delay(50);
    digitalWrite(buzzer,HIGH);
    delay(50);
    digitalWrite(buzzer, LOW);
    delay(50);
    digitalWrite(buzzer,HIGH);
    delay(50);
  }
}
