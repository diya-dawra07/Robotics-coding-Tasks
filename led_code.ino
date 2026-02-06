
const int ledPin = 13;      
const int buttonPin = 2;   

// Variables 
int buttonState = 0;        
bool ledIsBlinking = false; 
int blinkSpeed = 500;       
void setup() {

  
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); 
  
  digitalWrite(ledPin, LOW);
}




  // put your main code here, to run repeatedly:
  void loop() {
  
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW) {
    ledIsBlinking = !ledIsBlinking;  
    
    
    delay(300);  // delay
  }
  
  if (ledIsBlinking) {
    // Turn LED on
    digitalWrite(ledPin, HIGH);
    delay(blinkSpeed);  
    
    // Turn LED off
    digitalWrite(ledPin, LOW);
    delay(blinkSpeed); 
  } else {
    // Keep LED off when not blinking
    digitalWrite(ledPin, LOW);
  }
  }


