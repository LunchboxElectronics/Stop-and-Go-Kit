//Programmed using ATtiny85 (internal 1MHz clock) on USBtinyISP

void setup(){
  pinMode(3,OUTPUT); //RED
  pinMode(4,OUTPUT); //YELLOW
  pinMode(2,OUTPUT); //GREEN
}

void loop(){
  digitalWrite(2,HIGH); //Turn GREEN on
  delay(2000);          //Wait for 2 seconds
  digitalWrite(2,LOW);  //Turn GREEN off
  
  digitalWrite(4,HIGH); //Turn YELLOW on
  delay(1000);          //Wait for 1 seconds
  digitalWrite(4,LOW);  //Turn YELLOW off
  
  digitalWrite(3,HIGH); //Turn RED on
  delay(2000);          //Wait for 2 seconds
  digitalWrite(3,LOW);  //Turn RED off
}

  
  
