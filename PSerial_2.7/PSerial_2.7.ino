/************************************************************************************************************************
**                                                                                                                     ** 
**                                 Projecte 2 / Programa 7                                                             ** 
**       Editar i carregar un programa perquè en el monitor hi aparegui la solució de la hipotensua d'un TR            **
**                                                                                                                     **
**                                                                                                                     **                                                                                                        
************************************************************************************************************************/

//*********** Includes  ********************************************************************************



//***********  Variables  *******************************************************************************
int test = 32767;

//***********  Setup  ************************************************************************************
void setup() {
  Serial.begin(9600);
  Serial.print("Test value is: ");
  Serial.println(test);
  
  test = test + 1;
  
  Serial.print("Now it is ");
  Serial.println(test);
                  
}

//***********  Loop  **************************************************************************************
void loop() {
  
}