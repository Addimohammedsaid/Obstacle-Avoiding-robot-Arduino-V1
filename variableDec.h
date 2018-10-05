/******************************************************/
/*           Initialisation of robot pins             */
/******************************************************/

const char leftForward=3;// or b00001000 this is the pin number 11 on arduino uno  blong to the port B
const char leftBackward=2;

const char rightForward=1;
const char rightBackward=0;// same thing for all other pins for example this is pin number 8

char dis_trigger=4;
char dis_echo=13;//didn't use binary not sure whyy ?,,

const int PWM_servo=3;//servo pin 

int distance=0;//variable where the code put the distance mesure in

bool robot_notMoving=true;

int servoTime=120;// time for the servo TO move from left or right in angle of 45 degree

int turnTime=300;//time for turning slightly right or left

int reverseTime=700;//time for getting from front position to reverse 

/******************************************************/
/*           Fonctions delay of 1sec                  */
/******************************************************/
//use this function instead of delay for winning up to 100 byte per use 
void delay1sec(int x){
  for(int i=0;i<1000;i++){
  delayMicroseconds(x);
  }}
