/*************************************************************************************************
   Sketch para el control del robot escornabot
   La versión 1.0 de este programa se comenzó a escribir por Diego Lale el 19 de diciembre de 2016
   este programa forma parte también del robot garabullo
   
*/
/*************************************************************************************************
**********adelante() es la funcion a la que el programa llama para avanzar un cuadro**************
*/

void adelante()
{
  int pasos = pasosRecto + 10;
  while (pasos > 10)
  {
    int pin = pasos % 4;
    digitalWrite(derecho[pin], HIGH);
    digitalWrite(izquierdo[pin], HIGH);
    digitalWrite(derecho[(pin + 2) % 4], LOW);
    digitalWrite(izquierdo[(pin + 2) % 4], LOW);
    pasos -= 1;
    delayMicroseconds(tiempoEntrePaso);
  }
}

/*************************************************************************************************
************atras() es la funcion a la que el programa llama para retroceder un cuadro************
*/
void atras()
{
  int pasos = 10;
  while (pasos < pasosRecto + 10)
  {
    int pin = pasos % 4;
    digitalWrite(derecho[pin], HIGH);
    digitalWrite(izquierdo[pin], HIGH);
    digitalWrite(derecho[(pin + 2) % 4], LOW);
    digitalWrite(izquierdo[(pin + 2) % 4], LOW);
    pasos += 1;
    delayMicroseconds(tiempoEntrePaso);
  }
}
/*************************************************************************************************
 *******giro_izquierda()...¿lo tengo que explicar?, pues para girar a la izquierda****************
*/
void giro_izquierda()
{
  int pasos =  10;
  while (pasos < pasosGiro + 10)
  {
    int pin = pasos % 4;
    digitalWrite(derecho[pin], HIGH);
    digitalWrite(derecho[(pin + 2) % 4], LOW);
    digitalWrite(izquierdo[3 - pin], HIGH);
    digitalWrite(izquierdo[(3 - pin + 2) % 4], LOW);
    pasos += 1;
    delayMicroseconds(tiempoEntrePaso);
  }
}

/*************************************************************************************************
 *****************...y giro_derecha...¿para que será?... un misterio******************************
*/
void giro_derecha()
{
  int pasos =  10;
  while (pasos < pasosGiro + 10)
  {
    int pin = pasos % 4;
    digitalWrite(derecho[3 - pin], HIGH);
    digitalWrite(derecho[(3 - pin + 2) % 4], LOW);
    digitalWrite(izquierdo[pin], HIGH);
    digitalWrite(izquierdo[(pin + 2) % 4], LOW);
    pasos += 1;
    delayMicroseconds(tiempoEntrePaso);
  }
}

/*************************************************************************************************
 * **************** "apaga_motores" sirve para encender una corneta*********************************
 * no, en serio, para que al parar las bobinas no queden excitadas (se dice así... yo no tuve que ver en eso)
 * 
 */
void apaga_motores()
{
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(derecho[i], LOW);
    digitalWrite(izquierdo[i], LOW);
  }
}

