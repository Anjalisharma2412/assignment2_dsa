#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[100];                               // declaration of array
char RandomHexadecimalChar();               // declaration of function

char RandomHexadecimalChar()               //  function used to define to generate a random hexadecimal no.
{
    int randomnum = rand() % 16;
    //  in this we use the condition that if the randomly generated no. is smaller than 10 than it will return the same value by adding 0 in it
    if(randomnum < 10)  
    {
    return '0' + randomnum;  
    }
    // if the randomly generated no. is greater than 10 then firstly it will return 'A' and the we will subtract 10 from this no. to generate another no.
    else           
    {
    return 'A' + (randomnum-10);
    }
}
    
int main()
{
    srand(time(0));                         // here it is used for getting different output on each execution of program
     
    printf(" The required array is ->\n ");
    printf("The randomly generated alphanumeric characters are :\n");

    for(int a = 0 ; a < 100 ; a++)
    {
    int minLength = 3;                         // here i am providing the minimum and maximum length to the alphanumeric char
    int maxLength = 10;
    int length = rand() % (maxLength - minLength + 1) + minLength;
   
    for (int i = 0; i < length; i++)           // this loop is helping us to print the randomly generated alphanumeric char
    {
        // here i am calling the RandomHexadecimalchar function in loop
        char hexChar = RandomHexadecimalChar(); 

       // printf("The randomly generated alphanumeric character is :");
        printf("%c", hexChar);
        
    }

    printf(" % c",arr[a]);                  
    printf("\n");
     
    }
    return 0;
}

