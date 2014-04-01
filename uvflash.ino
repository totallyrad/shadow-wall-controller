/*
  Triggering an LED to blink 4 times then fire UV Flash with button press
 
  When pressing a pushbutton attached to pin 2. Blinks LED connected to digital pin 13 4 times 
 
 
circuit:

 * LED on Pin 13
 * pushbutton attached to pin 2 from +5V
 * 220K resistor attached to pin 2 from ground
 * Pin 9 to NPN MOSFET controlling UV Flash
 
 */

// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
const int uvFlash = 9;       // the number of the pin connected to NPN to fire UV

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int flashSequence = FALSE;   // variable for flashSequence command

void setup() 
{
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

void loop()

{
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) 
    {
      flashSequence = true;
      if(flashSequence == true);
  
        {     
          // blink LED on pin13 4 times    
            digitalWrite(ledPin, LOW); // off-on 1
            delay(500);
            digitalWrite(ledPin, HIGH);  
            delay(500);
            digitalWrite(ledPin, LOW); // off-on 2
            delay(500);
            digitalWrite(ledPin, HIGH);  
            delay(500);    
            digitalWrite(ledPin, LOW); // off-on 3
            delay(500);
            digitalWrite(ledPin, HIGH);  
            delay(500);
            digitalWrite(ledPin, LOW); // off-on 4
            delay(500);
            digitalWrite(ledPin, HIGH);  
            delay(500);
            digitalWrite(uvFlash, HIGH); // fire UV Flash on Pin 9
            delay(250);
            digitalWrite(uvFlash, LOW);
          }
        }
      
  else {
    // turn LEDs off:
    digitalWrite(ledPin, LOW); 
    digitalWrite(uvFlash, LOW);
  }
}
