/**********************************************************************************
**                                                                               ** 
**                        Projecte 4 / Programa 1                                **                                                                               
**                                                                               **                                                                                                        
**********************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
int tempAigua = 70;


//***********  Setup  *************************************************************
void setup() {
  Serial.begin(9600); 
  
  if ( tempAigua > 100);
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  }
}


//***********  Loop  **************************************************************
void loop() {
 
  
}
