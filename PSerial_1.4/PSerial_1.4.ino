/*******************************************************************************************************
**                                                                                                    ** 
**                                 Projecte 1 / Programa 4                                            ** 
**       Editar i carregar un programa perquè en el monitor hi apareguin les següents frases:         **
**                   - Escull un numero de l'operacio que vols realitzar?                             **                                    
**                   - 1.Comprovar numero de tarjeta de credit                                        **
**                   - 2.Comprovar numero de compte bancari                                           **
**                   - Buscar un digit perdut de tarjeta de credit                                    **               
**                                                                                                    **                                                                               
**                                                                                                    **                                                                                                        
*******************************************************************************************************/

//*********** Includes  ********************************************************************************



//***********  Variables  *******************************************************************************



//***********  Setup  ************************************************************************************
void setup() {
  Serial.begin(9600);
  Serial.println(" "); 
  Serial.print("Escull un numero de l'operacio que vols realitzar?");
  Serial.println(" ");
  Serial.print(" ");
  Serial.print("1.Comprovar numero de tarjeta de credit");
  Serial.println(" ");
  Serial.print(" ");
  Serial.print("2.Comprovar numero de compte bancari");
  Serial.println(" ");
  Serial.print(" ");
  Serial.print("Buscar un digit perdut de tarjeta de credit");
                   
 
}

//***********  Loop  **************************************************************************************
void loop() {
  
}
