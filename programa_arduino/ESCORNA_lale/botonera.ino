/*************************************************************************************************
   Sketch para el control del robot escornabot
   La versión 1.0 de este programa se comenzó a escribir por Diego Lale el 19 de diciembre de 2016
   este programa forma parte también del robot garabullo
   
*/

//***********zona donde se decide que botón está pulsado y que hacer en cada momento***********

void botonPulsado()
{
  while (analogRead(pinBotonera) > 50) //espera a soltar el botón para seguir
  {
    delay(100);
  }

  if ((lectura > arriba - margen) && (lectura < arriba + margen))
  {
    almacen[puntero] = 1;
    puntero += 1;
  }
  else if ((lectura > abajo - margen) && (lectura < abajo + margen))
  {
    almacen[puntero] = 3;
    puntero += 1;
  }
  else if ((lectura > derecha - margen) && (lectura < derecha + margen))
  {
    almacen[puntero] = 2;
    puntero += 1;
  }
  else if ((lectura > izquierda - margen) && (lectura < izquierda + margen))
  {
    almacen[puntero] = 4;
    puntero += 1;
  }
  else if ((lectura > enter - margen) && (lectura < enter + margen))
  {
   
    titiritititirititi();
#if defined(olvidalopasadoymiramedefrente)
    borrar();
#endif
  }
  else if ((lectura > borrado - margen) && (lectura < borrado + margen))
  {
    borrar();
  }
}

