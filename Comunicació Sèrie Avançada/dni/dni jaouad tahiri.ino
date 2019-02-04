//********** Variables ********************************************************
long num;
//********** Setup ************************************************************
void setup() { 
  Serial.begin(9600);  
  Serial.println("Entre el dni");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
  num = Serial.parseInt();
  
  if (Serial.read() == '\n') {
  Serial.print(num);
  if  (num % 23 == 0)
   { 
    Serial.print("-T");
   }
  else if (num % 23 == 1)
   {
   Serial.print("-R"); 
   }
  else if (num % 23 == 2)
  {
    Serial.print("-W");
  }
  else if (num % 23 == 3)
  {
    Serial.print("-A");
  }
  else if (num % 23 == 4)
  {
    Serial.print("-G");
  }
  else if (num % 23 == 5)
  {
    Serial.print("-M");
  }
  else if (num % 23 == 6)
  {
    Serial.print("-Y");
  }
  else if (num % 23 == 7)
  {
    Serial.print("-F");
  }
  else if (num % 23 == 8)
  {
    Serial.print("-P");
  }
  else if (num % 23 == 9)
  {
    Serial.print("-D");
  } 
  else if (num % 23 == 10)
  {
    Serial.print("-X");
  }
  else if (num % 23 == 11)
  {
    Serial.print("-B");
  }  
  else if (num % 23 == 12)
  {
    Serial.print("-N");
  } 
  else if (num % 23 == 13)
  {
    Serial.print("-J");
  }
  else if (num % 23 == 14)
  {
    Serial.print("-Z");
  }
  else if (num % 23 == 15)
  {
    Serial.print("-S");
  } 
  else if (num % 23 == 16)
  {
    Serial.print("-Q");
  }
  else if (num % 23 == 17)
  {
    Serial.print("-V");
  }
  else if (num % 23 == 18)
  {
    Serial.print("-H");
  } 
  else if (num % 23 == 19)
  {
    Serial.print("-L");
  }   
  else if (num % 23 == 20)
  {
    Serial.print("-C");
  }
   else if (num % 23 == 21)
  {
    Serial.print("-K");
  }  
  else (num % 23 == 22);
  {
    Serial.print("-E");
  }
  }
}
  }


   
  
  
  
