/******************************************************/
/*           Initialisation setup                     */
/******************************************************/

void intialisations(){

  DDRB  = B00011111;//make all of pin 8 to 12 as output others input
  PORTB = B00000000;//set all pins of port B to LOW
  
  servo.attach(PWM_servo);
}
