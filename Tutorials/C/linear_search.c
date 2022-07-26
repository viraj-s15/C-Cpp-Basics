/*
 * This program uses a lot of concepts and can be regarded as one of the more difficult problems to solve, considering the nature of C language
 * We are using 3 header files for this particular piece of code which is to implement a linear search on an array of strings
 * Since C doesn't have strings as a data type, and is represented by array of characters terminating with a NULL character \0
 * We have to use a 2D array of characters to implement array of strings.
 * 
 * @author Suteerth Subramaniam
 * 
 */

#include <stdio.h>
#include <stdlib.h> //To use calloc() which is necessary for DMA
#include <string.h> //To use strlen(), strcmp() and strcpy()
int main()
{
    char **array = NULL; //We declare our pointer to pointer variable of type char and give the memory address as NULL
    int i, n; 
    printf("Enter number of elements : ");
    scanf("%d", &n); //To take user input for number of strings in the "list"

    array = (char **)calloc(n, sizeof(char *)); //Using contigous allocation or calloc to allocate a continous memory block for our
                                                //Pointer to Pointer array, basically, it will contain char pointers
                                                //These char pointers will be our character arrays
                                                //Since an array when used without index is a pointer to the first element of the array.
    char temp[256]; //Temporary array to take input strings.
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%s", temp); //Using %s adds a NULL character at the end of the string, so the compiler can recognise it as a C type string.
        array[i] = (char *)calloc(1, strlen(temp) + 1); //The first index of the array is filled with pointer of the chracter array
        //We use strlen()+1 t accomodate the NULL character at the end which is ignored by the strlen function.
        strcpy(array[i], temp); //Since we can't modify arrays directly, we have to use the strcpy() method
    }
    printf("Enter Search Keyword : ");
    scanf("%s", temp);
    for (i = 0; i < n; i++)
    {
        if (strcmp(temp, array[i]) == 0) //strcmp() returns the difference between the two strings given as function parameters
        {                                //If the difference is 0, that means that we have found a match and the task is over 
            printf("Match found at position %d", i + 1);
            break; //To exit the loop since the task is finished, this can be removed if multiple search matches are to be validated.
        }
    }

    return 0;
}
