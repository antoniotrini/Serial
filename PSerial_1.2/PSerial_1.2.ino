/**********************************************************************************
**                                                                               ** 
**                         Projecte 1 / Programa 2                               ** 
**   Editar i carregar un programa perquè en el monitor hi aparegui la frase:    **
**                              Hello world!                                     **               
**            Cada cop cada segon, una frase al costat de l'altre.               **                                                                               
**                                                                               **                                                                                                        
**********************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************



//***********  Setup  *************************************************************
void setup() {
  Serial.begin(9600);                   
 
}

//***********  Loop  **************************************************************
void loop() {
  Serial.print("Hello world!");
  delay(1000);
}