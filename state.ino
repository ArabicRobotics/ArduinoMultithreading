	
    #include "state.h"

	
	
	


unsigned long lastMillis = millis();
unsigned long prevTimeOut = millis();

int timeOut = 3000;




	void serialLoop() 
  {    
       if (unsigned long  currentTime = millis() >  prevTimeOut +timeOut)
       {
          //////////// try to Read 
          
           while (Serial.available()) 
          {
            Serial.println("Serial Available : ");
            Serial.println();
           char x = (char)Serial.read();
            Serial.println(x);
            //getDataFromPC(x);
          }
             prevTimeOut = millis();
            Serial.println("Time Out");
         }       
         else
         {
          }   
         
       /////////////time out           
  
  }   
  
    void setup() 
	{
 
	}
void loop() {
blink(); 	
}

