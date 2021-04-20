int ledPin = 9;         // declare the pin number 9 as ledPin             

 
void setup() {
  pinMode(ledPin, OUTPUT);      // Set up the mode for ledPin(9) as OUTPUT
  Serial.begin(9600);
}
 
void loop(){



    if(Serial.available()>0)
    {
       char input = Serial.read();                    [1]
       switch( input)                            // implemented switch statement for different inputs
       {
         case 'F':
         {
             digitalWrite(ledPin, HIGH);
             break;
         }
         case 'B':
         {
            digitalWrite(ledPin, LOW);                [2]
            break;
         }
         case 'R':
         {
            digitalWrite(ledPin, HIGH);
            delay(100);                               [3] 
            digitalWrite(ledPin,LOW);
            delay(100);
            break;
            
         }
         
         default:
         {
            break;
         }
       }
      
    }
   
      
  
}


REFERENCES:

1. https://www.arduino.cc/reference/en/language/functions/communication/serial/read/
2. https://www.arduino.cc/reference/en/language/functions/digital-io/digitalwrite/
3. https://www.arduino.cc/reference/en/language/functions/time/delay/
