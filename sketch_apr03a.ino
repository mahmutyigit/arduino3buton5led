int ledPinleri[] = {2, 3, 4, 5, 6};
int buton1 = 8;
int buton2 = 9;
int buton3 = 10;
int i;
int butonDurumu = 0;
int a;

void setup()
{
  pinMode(buton1, INPUT);
  pinMode(buton2, INPUT);
  pinMode(buton3, INPUT);

  for (i = 0; i <= 5; i++)
  {
    pinMode(ledPinleri[i], OUTPUT);
  }
}

void loop()
{
  int delayTime = 200;

  butonDurumu = digitalRead(buton1);

      if (butonDurumu == 1)
      {
        for (i = 0; i <= 5; i++)
        {
          digitalWrite(ledPinleri[i], HIGH);
          delay(delayTime);
        }
    
        for (i = 5; i >= 0; i--)
        {
          digitalWrite(ledPinleri[i], LOW);
          delay(delayTime);
        }
      }

  butonDurumu = digitalRead(buton2);

      if (butonDurumu == 1)
      {
        for (i = 5; i >= 0; i--)
        {
          digitalWrite(ledPinleri[i], HIGH);
          delay(delayTime);
        }
    
        for (i = 0; i <= 5; i++)
        {
          digitalWrite(ledPinleri[i], LOW);
          delay(delayTime);
        }
      }

  butonDurumu = digitalRead(buton3);
      if (butonDurumu == 1)
      {
        for (a=0; a<10; a++)
        {
          for (i=0; i<1; i++)
          {
            digitalWrite(ledPinleri[i], HIGH);
            digitalWrite(ledPinleri[i + 1], HIGH);
            digitalWrite(ledPinleri[i + 2], HIGH);
            digitalWrite(ledPinleri[i + 3], HIGH);
            digitalWrite(ledPinleri[i + 4], HIGH);
            delay(200);
          }
    
          for (i=4; i>=0; i--)
          {
            digitalWrite(ledPinleri[i], LOW);
            digitalWrite(ledPinleri[i - 1], LOW);
            digitalWrite(ledPinleri[i - 2], LOW);
            digitalWrite(ledPinleri[i - 3], LOW);
            digitalWrite(ledPinleri[i - 4], LOW);
            delay(200);
          }
        }
      }
}
