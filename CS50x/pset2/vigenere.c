#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/* 
This is a vigenere cipher whereby you type a keyword at the comman line argument and the program encrypts the
input that you type using the keyword.  


#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


This is a vigenere cipher whereby you type a keyword at the comman line argument and the program encrypts the
input that you type using the keyword.  
clear
int main ( int argc,string argv[])

{ 

    if (argc < 2)
    { 
      printf("Please give me a valid key in the form of string to be encoded \n");
      return 1;
    }
    else
    {
    // This for loop ensures that the command line arguments are letters and not numbers.
  
       for ( int i = 0,n = strlen(argv[1]); i < n; i++)
       {
             if(!(isalpha(argv[1][i])))
             {
             printf("Please give me a keyword in the command line arguement");
             return 1;
             }
       } 
    }

    // Here we ask the user for strings.
    string key = argv[1]; 
    string input = GetString();
          
     for (int i = 0, j = 0, count = strlen(input); i < count; i++, j++)
     {
    //Converts the j-th character in the key into a lowecase
    key[j] = tolower(key[j]);
    
    //Checks if character is alpha
    if (isalpha(input[i]))
    {
		 //Checks if character is lowercase
         if (islower(input[i]))
     	{
          //Conversion block
          input[i] =((input[i] - 97) + (key[j % strlen(key)] - 97 )) % 26 ;
          printf("%c", input[i] + 97);
     	}
         //If upper case then do this:
         else if (isupper(input [i]))
    	{
          //Conversion block
          input[i] =((input[i] - 65) + (key[j % strlen(key)] - 97 )) % 26 ;
          printf("%c", input[i] + 65);
     	} 
	}
    //If NOT alpha
	else
    {
         printf("%c",input[i]);
     	 j--; 
    }

    
    }
     
    printf("\n");
    return 0;
}
**/
int main ( int argc,string argv[])

{ 

    if (argc < 2)
    { 
      printf("Please give me a valid key in the form of string to be encoded \n");
      return 1;
    }
    else
    {
    // This for loop ensures that the command line arguments are letters and not numbers.
  
       for ( int i = 0,n = strlen(argv[1]); i < n; i++)
       {
             if(!(isalpha(argv[1][i])))
             {
             printf("Please give me a keyword in the command line argument");
             return 1;
             }
       } 
    }

    // Here we ask the user for strings.
    string key = argv[1]; 
    string input = GetString();
          
     for (int i = 0, j = 0, count = strlen(input); i < count; i++, j++)
     {
    //Converts the j-th character in the key into a lowecase
    key[j] = tolower(key[j]);
    
    //Checks if character is alpha
    if (isalpha(input[i]))
    {
		 //Checks if character is lowercase
         if (islower(input[i]))
     	{
          //Conversion block
          input[i] =((input[i] - 97) + ((key[j] - 97 ) %strlen(key))) % 26 ;
          printf("%c", input[i] + 97);
     	}
         //If upper case then do this:
         else if (isupper(input [i]))
    	{
          //Conversion block
          input[i] =((input[i] - 65) + (key[j % strlen(key)] - 97 )) % 26 ;
          printf("%c", input[i] + 65);
     	} 
	}
    //If NOT alpha
	else
    {
         printf("%c",input[i]);
     	 j--; 
    }

    
    }
     
    printf("\n");
    return 0;
}




