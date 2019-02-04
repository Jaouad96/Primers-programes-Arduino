//********** Variables ********************************************************
int num, numxifres;
int i;
//********** Setup ************************************************************
void setup() { 
  Serial.begin(9600);  
  Serial.println("Entre un numero");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
  num = Serial.parseInt();
  Serial.print("El ");
  Serial.print("numero ");
  Serial.print(num);
  Serial.print(" te ");
  numxifres=0;
  if (Serial.read() == '\n') {
  num = num/10;
  numxifres++;
  while  (num  != 0)
  Serial.print(numxifres);
  Serial.print( "xifres");
  
  
  }
}
  }
