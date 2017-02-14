/*************************************************************************************************
   Sketch para el control del robot escornabot
   La versión 1.0 de este programa se comenzó a escribir por Diego Lale el 19 de diciembre de 2016
   este programa forma parte también del robot garabullo
   
*/
void setup()
{
  int cuenta = 0;
  //Serial.begin(9600);
  pinMode(13, OUTPUT);
  while (cuenta < 4)
  {
    pinMode(derecho[cuenta], OUTPUT);
    pinMode(izquierdo[cuenta], OUTPUT);
    cuenta += 1;
  }
  pinMode(13, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  lectura = analogRead(pinBotonera);
  if (lectura > 50 && lectura < 1000)
  {
    test_vivo = 0;
    pita();
    delay(50);
    botonPulsado();
  }
  delay(100);
  test_vivo += 1;
  if (test_vivo > estoy_vivo)
  {
    alive();
  }
}

