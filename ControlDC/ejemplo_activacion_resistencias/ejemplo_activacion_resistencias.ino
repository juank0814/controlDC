const int R0=11;
const int R1=10;
const int R2=9;
const int R3=8;
const int R4=7;



void setup()
{
     pinMode(R0, OUTPUT);
     pinMode(R1, OUTPUT);
     pinMode(R2, OUTPUT);
    
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(1000); 
                      
  digitalWrite(11, LOW);   
  delay(1000);                       
}
