#include <stdio.h>
#include<cs50.h>
/**To ask for user input I used a do while loop. So if the user fails to meet the specfications then the loop will keep 
  * iterating through it till the need is sufficed. I used nested loops for printing the half pyramid. The outer for loop
  * will print the number of rows while the inner for loops will be responsible for prinitng th columns (aka hashes and spaces)
  */

int main(void)

{
int height ;// the height variable just stores the user input
int new_line;// this was an important variable because it takes control of the number of rows as in the outer loop 
int hashes,spaces;//Just as the name suggests, these variables will be responsible for printing spaces or hashes. 
     do
     {
           printf("Please give me a number between 0 and 23(inclusive)\n");
            height = GetInt();
     } 
    while( height < 0 || height > 23);

    for(new_line = 0; new_line < height; new_line++)
     { 
         for(spaces = 0; spaces < height- new_line - 1 ; spaces++)
         { 
         printf(" ");
         }

         for(hashes = 0 ;hashes <= new_line + 1 ; hashes++)
         {
         printf("#");
         }

      printf("\n");
     }

}
