#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 1024
#define digits 10
int main()
{
    char string[MAX];
    scanf("%s", string);
    int key[digits];
    int freq[digits];
    for (int i = 0; i <= 9; i++)
    {
        key[i] = i;
        freq[i] = (int)0;
    }
    int *array = NULL; //initializing the pointer to NULL
    array = malloc((strlen(string)) * sizeof(int)); //Dynamic Memory Allocation to allocate space based on the string length
    int size = 0;
    for (int i = 0, j = 0; i < strlen(string); i++)
    {
        if (string[i] <= '9' && string[i] >= '0') //Basic IF CHECK to make sure that the character at index i is  
        {
            *(array + j) = (int)(((int)string[i]) - ((int)'0')); //Typecasting into INT
            j++;
            size++;
        }
    } 
    /*
    Here, we demonstrate maths involving ASCII Values
    For example, ASCI value for zero is 48, so the character in the string at i index will be subtracted by 48 to give the necessary integer
    49-48 = 1 ; ASCII for 1 is 49
    */
    array = realloc(array, size * sizeof(int));
    for (int i = 0; i < digits; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (*(array + j) == key[i])
            {
                freq[i]++;
            }
        }
    } //We are storing the frequency of the digits occurring in the string in an array
    for (int i = 0; i < digits; i++)
    {
        printf("%d ", freq[i]);
    }
    return 0;
}
