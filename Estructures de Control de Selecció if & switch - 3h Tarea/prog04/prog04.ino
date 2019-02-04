/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
** Jaouad Tahiri                                      Data: 20/01/2019           **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float  Qualener = 43.2 ;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
 
  Serial.begin(9600); 
  if (Qualener < 3.5)
  {
    Serial.print("A");
  }
  else if (Qualener >= 3.5 && Qualener < 6.5 )
  {
    Serial.print("B");
  }
  else if (Qualener >= 6.5 && Qualener < 11.1)
  {
    Serial.print("C");
  }
  else if (Qualener >= 11.1 && Qualener < 17.7)
  {
    Serial.print("D");
  }
  else if (Qualener >= 17.7 && Qualener < 38.2)
  {
    Serial.print ("E");
  }
  else if (Qualener >= 38.2 && Qualener < 43.2)
  {
    Serial.print ("F");
  }
  else
  {
    Serial.print ("G");
  }
}

//********** Loop *****************************************************************
void loop()  
{
}


//********** Funcions *************************************************************
