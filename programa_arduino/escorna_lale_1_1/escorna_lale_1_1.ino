/*************************************************************************************************
   Sketch para el control del robot escornabot
   La versión 1.0 de este programa se comenzó a escribir por Diego Lale el 19 de diciembre de 2016
   este programa forma parte también del robot garabullo
   14/febrero/2017 actualización para botoneras que derivan a 5v en vez de a 0v
   
*/
//******************************ZONA DE CONFIGURACIONES*******************************************
/***************************Arrays derecho[] e izquierdo[]****************************************
   El array "derecho[]" almacena los pines del motor derecho IN1, IN2, IN3, IN4
   El array "izquierdo[]" almacena los pines del motor izquierdo IN1, IN2, IN3, IN4
*/
int derecho[] = {12, 11, 10, 9};
int izquierdo[] = { 2, 3, 4, 5};
/*******************************Configuracion de buzzer********************************************
   buzzer almacena el pin donde se conecta el buzzer
   tiempoPitido almacena la duración del pitido en ms, por defecto 20.
   tiempo_pitido_laaaaargo es el tiempo del pitido del final de movimientos
*/
int buzzer = 7;
int tiempoPitido = 20;
int tiempo_pitido_laaaaargo = 1000;
/*********************************Variable almacen*************************************************
   almacen es la variable donde se van a almacenar los movimientos de GARABULLO
   por defecto son 100 como máximo, si fuese necesario se puede ampliar
   puntero es el apuntador de dirección de almacén para almacenar los movimientos.
*/
int almacen[100] = {};
int puntero = 0;


/**********************borrado automático/manual de movimientos ya hechos**************************
 **************************************************************************************************
** si se descomenta esta variable de cuyo nombre no quiero acordarme al terminar los movimientos se
**borra automáticamente el programa, se vacía el almacén. No tenemos no nos quedan movimientos.
*/

//#define olvidalopasadoymiramedefrente

/******************************Variable "tiempoEntrePaso"******************************************
   el retardo en ms que hay entre pasos del motor
   bajando el tiempo el robot será más rápido
   si pierde pasos se debe aumentar.
*/
int tiempoEntrePaso = 2500;
/****************************Variables pasosRecto y pasosGiro**************************************
   En pasosRecto se debe almacenar el número de pasos que necesita GARABULLO para avanzar un cuadro
   En pasosGiro se debe almacenar el número de pasos que necesita GARABULLO para girar 90º
*/
int pasosRecto = 1285;
int pasosGiro = 520;
/**************************Variables relaccionadas con botonera analógica**************************
*/
int pinBotonera = 7;

int arriba = 573;
int abajo = 284;
int derecha = 720;
int izquierda = 428;
int enter = 143;
int borrado = 870;

int lectura;          //variable donde se almacena la lectura al pulsar un botón
int margen = 30;      // la diferencia entre la lecturade referencia y la posible lectura

/*******************Variables que avisan de que te has olvidado el Garabullo encendido*************
 * estoy_vivo Por defecto 600, avisa cada minuto de que está encendido si no se pulsa ningún botón
 * ni se efectúa ningún movimiento.
 */
int estoy_vivo = 600;
int test_vivo = 0;

