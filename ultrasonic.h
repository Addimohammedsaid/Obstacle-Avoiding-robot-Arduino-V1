/******************************************************/
/*         functions for measuring distance             */
/******************************************************/
  boolean Dist()
  {     
    
  PORTB &= ~(1<<dis_trigger);
  delayMicroseconds(2);
  PORTB |= (1<<dis_trigger);
  delayMicroseconds(10);
  PORTB &= ~(1<<dis_trigger);
  
  distance=pulseIn(dis_echo,HIGH)/58.0;

  if(distance<20){return false;}//If the disance is over 20 cm it's consdring that there is and object
  //and return a false statment 
  else{return true;}
  
  }
