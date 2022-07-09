// Question : Find the frequecy of digits occuring in a string entered by the user
/*
We are going to include some header files into our program so we can use some pre defined functions such as scanf(), printf(), strlen(), malloc() etc.
*/
#include <stdio.h>  //For Input and Output
#include <string.h> //For String functions
#include <stdlib.h> //For Dynamic Memory Allocation, mainly calloc(), malloc(), realloc(), free() etc.
#define MAX 1024    //We are defining a constant called MAX which has a value of 1024, since this is declared globally, we can use it anywhere.
#define digits 10   //Similar to MAX, since there are 10 digits possible in the number sysytem, the value is 10
int main()
{
    char string[MAX];  //A character array with length 1024 since we don't know the length of the string user will enter
    // We can use DMA here, but for simplicity, we haven't done that
  
    scanf("%s", string); //Taking a string input this way puts a null \0 character at the end of the array which makes it a proper C string
    // Downside is that, we can take one word only, fgets() can be used for multi-word strings
  
    int key[digits]; //This arrau is our key, it will contain all possibe digits from 0 to 9
    int freq[digits]; //Using the indices, first index represents frequency of 0 in string and so on so forth.
  
    for (int i = 0; i <= 9; i++)
    {
        key[i] = i;
        freq[i] = (int)0; // Typecasting 0 as (int) to demonstrate the method
    } // A simple loop to fill these arrays 
  
    int *array = NULL; //initializing the pointer array to NULL
    array = malloc((strlen(string)) * sizeof(int)); //Dynamic Memory Allocation to allocate space based on the string length
  
    int size = 0; //The size of the numeric string which we will create in "array"
    for (int i = 0, j = 0; i < strlen(string); i++) //The loop will run 'strlen()' times
    {
        if (string[i] <= '9' && string[i] >= '0') //Basic IF CHECK to make sure that the character at index i is an integer
        {   
            /*
            The steps below may look complex, but what we are doing is, as we have allocated array pointer some blocks in memory in a 
            contigous form, it is like an array, and using pointer arithmatic, we can access the blocks one at a time as if it were an array
            This is a common practice to deal with arrays created using DMA
            */
            *(array + j) = (int)(((int)string[i]) - ((int)'0')); //Typecasting into INT
            /*
            Here, we demonstrate maths involving ASCII Values
            For example, ASCI value for zero is 48, so the character in the string at i index will be subtracted by 48 to give the necessary integer
            49-48 = 1 ; ASCII for 1 is 49
            */
          
            j++; //The second variable we assigned needs to be incremented as well right?
            size++;
        }
    } 
    
    array = realloc(array, size * sizeof(int)); // Demonstrating usage of realloc
    for (int i = 0; i < digits; i++) //Loop for iterating through the key
    {
        for (int j = 0; j < size; j++) //Loop for iterating through the string numbers
        {
            if (*(array + j) == key[i]) //If a value in the array matches the key, corresponding value at the freq array index is incremented 
            {
                freq[i]++;
            }
        }
      
    } //Now, the frequency of digits will be printed in a fashion like X X X X X ... starting from 0 to 9
    for (int i = 0; i < digits; i++)
    {
        printf("%d ", freq[i]);
    }
    return 0;
}
