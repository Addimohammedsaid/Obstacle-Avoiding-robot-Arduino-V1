 /******************************************************/
/*         A functions that find a free path          */
/******************************************************/
void findPath(){  //I think this function explaines her self :) 
   motor_stop();
   look_left();
   if(Dist()){motor_left();}
   look_right();
   if(Dist()){motor_right();}
   else{ motor_reverse();}
   }  
