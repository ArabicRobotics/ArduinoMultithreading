

#pragma region structure state 
struct State
{
///////////// Timer  related  
long OnTime = 20;     // milliseconds of on-time
long OffTime = 20;
//long OffTime=100;    // milliseconds of off-time
unsigned long previousMillis;   // will store last time led was updated
int iloopState = 0;
int jloopState = 0;
unsigned long currentMillis = millis();
bool IsEmpty = true;
bool looping = false;
void keepState(int looperi = 0, int looperj = 0)
{
	IsEmpty = false;
	iloopState = looperi;
	jloopState = looperj;
	previousMillis =  millis();   // will store last time led was updated	
}
void restoreSession()
{	
	currentMillis = millis();
}
void reset()
{
		iloopState = 0;
		jloopState = 0;
		IsEmpty = true;
}

};
#pragma endregion

State blinkState;

  void On()
  {
    ///// your code for on is here ...
    }
  void Off()
  {
    /// your code for off is here ...
    }
  
	void blink()
			{
				if (blinkState.IsEmpty == true)
				{       
				On();				
				blinkState.iloopState = 1;
				blinkState.keepState(blinkState.iloopState);      
				return;
				}
			   if (blinkState.iloopState==1)
			   {
			   if (millis() < blinkState.previousMillis +  blinkState.OnTime) return;      
						//Off();
						blinkState.iloopState = 0;
				blinkState.keepState(blinkState.iloopState);
						return;			
				}
     
      if (blinkState.iloopState==0)
      {
         if (millis() < blinkState.previousMillis +  blinkState.OffTime) return;                  
				//On();
				blinkState.iloopState = 1;
         blinkState.keepState(blinkState.iloopState);	
				return;
      }
	};	

