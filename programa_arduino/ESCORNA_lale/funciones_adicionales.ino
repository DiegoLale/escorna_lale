/*************************************************************************************************
   Sketch para el control del robot escornabot
   La versión 1.0 de este programa se comenzó a escribir por Diego Lale el 19 de diciembre de 2016
   este programa forma parte también del robot garabullo
   
*/
/************************************FUNCIONES ADICIONALES***************************************
 * 
 */




/**********************************funcion borrar*************************************************
elimina todo lo almacenado en almacen
 */
void borrar()
{
  delay(500);
  puntero = 0;
  while (almacen[puntero] > 0)
  {
    almacen[puntero] = 0;
    puntero += 1;
  }
  for (int i = 0; i < 3; i++)
  {
    pita();
    delay(tiempoPitido * 5);
  }
  puntero = 0;
}


/***********************************Funciones de sonido*******************************************
 * 
 */

void alive()
{
    test_vivo = 0; //resetea el contador
    pita();
    delay(tiempoPitido * 5);
    pita();
}

void pita()
{
  digitalWrite(buzzer, HIGH);
  delay(tiempoPitido);
  digitalWrite(buzzer, LOW);
  delay(tiempoPitido);
}

void pitido_laaarrrrgoooo()
{
  digitalWrite(buzzer, HIGH);
  delay(tiempo_pitido_laaaaargo);
  digitalWrite(buzzer, LOW);
  delay(tiempo_pitido_laaaaargo);
}
