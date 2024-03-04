int input_strength = A0,LED=7;
int strength=0;
bool swap = false;

void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {
  strength = analogRead(input_strength);
  if(strength>200)
  {
       swap = (!swap);
       if(swap)
       {
          digitalWrite(LED,HIGH); 
       }
       if(!swap)
       {
          digitalWrite(LED,LOW); 
       }
  }
  delay(100);
}
