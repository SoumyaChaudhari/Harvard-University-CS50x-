#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
   
   
   if ( argv[1] <= 0 || argc < 2)
   {
      printf("Please give me a command line argument containing an integer \n");
      return 1;
   } 
   int key = atoi(argv[1]); 
     
     string input = GetString();
      
      for( int i = 0 , length = strlen(input); i < length ; i++)
      { 
           if(islower(input[i]))
           {
           int ascii_lower = 'a';
           input[i] = ((input[i] - ascii_lower) + key) % 26; 
           printf("%c", input[i] + ascii_lower);
           } 

           else if( isupper(input[i]))
           {
           int ascii_upper = 'A';
           input[i] = ((input[i]- ascii_upper)  + key) % 26; 
           printf("%c", input[i]+ ascii_upper);
           }
           else 
           printf("%c",input[i]);
      }
      printf("\n");
       
      return 0;
     
}
