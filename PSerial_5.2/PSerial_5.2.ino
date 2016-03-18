/**********************************************************************************
**                                                                               ** 
**                        Projecte 5 / Programa 2                                **                                                                               
**                                                                               **                                                                                                        
**********************************************************************************/

//*********** Includes  ***********************************************************



//***********  Variables  *********************************************************
float numParell, numSenar;          
float rSerie, rParalel;

//***********  Setup  *************************************************************
void setup() {
 Serial.begin(9600); // initialize serial
 Serial.print("Entrar un numero, ");
}


//***********  Loop  **************************************************************
void loop() {
 while (Serial.available() > 0) {                   
  
    numParell = Serial.parseInt();                        
    Serial.print("el ");
    Serial.print(numParell);
    Serial.print(" es parell.");
    
    Serial.print("  ");
    
    numSenar = Serial.parseInt();
    Serial.print("el ");
    Serial.print(numSenar);
    Serial.println(" es parell.");
    
    if (Serial.read() == '\n') {                    
      
    rSerie = r1 + r2;
    rParalel = (r1 * r2) / (r1 + r2);

    Serial.print("rSerie = ");
    Serial.print(rSerie);
    Serial.print(" Ohms");

    Serial.print("   ");

    Serial.print("rParalel = ");
    Serial.print(rParalel);
    Serial.println(" Ohms");

    Serial.println(" ");

    Serial.println("Entra nous valors per r1 ir2");

    Serial.println(" ");
    }
  } 
}
