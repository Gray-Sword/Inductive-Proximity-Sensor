const int proximitySensorPin = 2; 
const int ledPin = 13;             

void setup() {
  
  pinMode(proximitySensorPin, INPUT); 
  pinMode(ledPin, OUTPUT);           
  
  
  Serial.begin(9600);
  Serial.println("NPN Inductive Proximity Sensor Test");
}

void loop() {
  
  int sensorState = digitalRead(proximitySensorPin);
  
  
  Serial.print("Sensor State: ");
  Serial.println(sensorState);
  
  
  if (sensorState == LOW) {  
    digitalWrite(ledPin, HIGH); 
    Serial.println("Metal Object Detected!");
  } else {                    
    digitalWrite(ledPin, LOW);  
    Serial.println("No Object");
  }

  delay(1000); 
}
