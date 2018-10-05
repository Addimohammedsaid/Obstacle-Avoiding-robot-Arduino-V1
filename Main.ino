/***********************************************************************************************/
/*                                 Avoiding Robot v1.0                                         */
/*                                                                                             */
/*                The robot car explore in a straight line and avoid obsticale                 */                                                         
/*                                                                                             */
/*                           In 02/10/2018 by  ADDI Mohammed Said                              */
/*                                                                                             */
/*                                                                                             */
/***********************************************************************************************/

/*****************************************************************/
/*                         LIBRAIRIES                            */
/*****************************************************************/
#include <Servo.h>
#include "variableDec.h"
#include "servoControl.h"
#include "Init.h"
#include "ultrasonic.h"
#include "motorControl.h"
#include "findPath.h"

void setup() { 
   intialisations();
}

void loop() {
  //a simple algorithme , will updating this soon !!
  look_forward();
  if(Dist()){motor_forward();}
  else{
  findPath();
  }
   delayMicroseconds(1000); 
}
  
