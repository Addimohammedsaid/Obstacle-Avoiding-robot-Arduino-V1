 /******************************************************/
/*          Function for moving forward                */
/******************************************************/
 void motor_forward()
 {
     PORTB &= ~((1<<leftBackward)|(1<<rightBackward));//this replace digitalWrite(LOW) for stoping motors backwards
     PORTB |= (1<<leftForward)|(1<<rightForward);//this replace digitaWrite(HIGH) for moving motors forward
  }

 /******************************************************/
/*          Function for moving backward                */
/******************************************************/
void motor_backward()
 {
     PORTB &= ~((1<<leftForward)|(1<<rightForward));
     PORTB |= (1<<leftBackward)|(1<<rightBackward);
  }

 /******************************************************/
/*          Function for moving left                  */
/******************************************************/
void motor_left()
 {
    PORTB &= ~((1<<leftBackward)|(1<<rightForward));
    PORTB |= (1<<leftForward)|(1<<rightBackward);
    delay1sec(turnTime);
 }
 /******************************************************/
/*          Function for moving right                 */
/******************************************************/
void motor_right()
 {
     PORTB &= ~((1<<leftForward)|(1<<rightBackward));
     PORTB |= (1<<leftBackward)|(1<<rightForward);
     delay1sec(turnTime);
 }
  /******************************************************/
/*          Function for stop the motors               */
/******************************************************/
void motor_stop()
 {
   PORTB &= ~((1<<leftBackward)|(1<<rightBackward));
   PORTB &= ~((1<<leftForward)|(1<<rightForward));
   robot_notMoving=true;
 }
 
  /******************************************************/
/*       Function for moving reverse positions          */
/******************************************************/
void motor_reverse()
 {
   PORTB &= ~((1<<leftForward)|(1<<rightBackward));
   PORTB |= (1<<leftBackward)|(1<<rightForward);
   delay1sec(reverseTime);
 }
 
