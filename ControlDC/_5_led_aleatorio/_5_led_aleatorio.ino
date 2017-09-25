int outPin[] = {11, 10, 9, 8};

void setup()
{
  int i = 0;

  for ( i = 0; i < 5; i++)

    pinMode(outPin[i], OUTPUT);
}

void loop()
{
  int i = 0, j=0;
  for ( i = 0; i < 32; i++)
  {
     for ( j = 0; j < 5; j++)
     {
       if ( ( (i >> j) & 1 )  == 1 )
           digitalWrite(outPin[j], HIGH);
       else digitalWrite(outPin[j], LOW);
      }
  }

}
