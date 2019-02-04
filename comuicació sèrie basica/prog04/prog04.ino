/**********************************************************************************
**                                                                               **
**                               Hello World                                     **
**                                                                               **
**  Jaouad Tahiri                                                    03/12/2018  **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()               
{
  Serial.begin(9600);      
  Serial.println("Escull el numero de l'operacio que vols realitzar?");
  delay(1000);
  Serial.println("  1.Comprovar numero de la tajeta de credit");
  delay(1000);
  Serial.println("  2.Comprovar numero de compte bancari");
  delay(1000);
  Serial.println("  3.Buscar un digit perdut de tarjeta de credit");
  delay(1000);
}

//********** Loop *****************************************************************
void loop()   
{
           
}

//********** Funcions *************************************************************
