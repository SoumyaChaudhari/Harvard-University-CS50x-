
#include <stdio.h>
#include <cs50.h>
#include <math.h>
/**Each while loop cecks if the user_input converted into cents is more than or equal to the amounts of
 * the quarter or nickel or dime so that it can subtract the respective value from it. 
 * The print statement just prints the value of my counter. 
 */ 
int main (void)
{
       float user_input; 
       int x;//x stores the value of the money in cents
       int counter;// counter adds to the number of coins needed
       do
       {
       printf("Hi! How much change is owed? \n");
       user_input = GetFloat();
       } 
       while(user_input < 0);
       x = round(user_input * 100);
      
       counter = 0;
       while (x >= 25) 
       {
               counter ++;
               x = x- 25;
               
       }
     
       while (x >= 10)
       {
               counter ++;
               x = x- 10;
               
       }
 
       while (x >= 5)
       {
               counter ++;
               x  = x- 5;
              
       }
 
       while (x >= 1)
       {
               counter ++;
               x = x- 1;
               
       }
  
       printf("%d\n",counter);
       
}

