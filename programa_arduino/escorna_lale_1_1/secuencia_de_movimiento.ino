/*************************************************************************************************
   Sketch para el control del robot escornabot
   La versión 1.0 de este programa se comenzó a escribir por Diego Lale el 19 de diciembre de 2016
   este programa forma parte también del robot garabullo
   
*/
/*
   Función principal del programa o no, pero yo diría que si.
   Es la función que efectúa la secuencia de movimientos.
*/
void titiritititirititi()
{
  puntero = 0;
  while (almacen[puntero] > 0)
  {
    switch (almacen[puntero])
    {
      case 1:
        adelante();
        pita();
        puntero += 1;
        break;

      case 2:
        giro_derecha();
        pita();
        puntero += 1;
        break;

      case 3:
        atras();
        pita();
        puntero += 1;
        break;

      case 4:
        giro_izquierda();
        pita();
        puntero += 1;
        break;
    }
  }
  apaga_motores();
  pitido_laaarrrrgoooo();
}

