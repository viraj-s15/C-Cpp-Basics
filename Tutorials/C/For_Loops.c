/*
 * This program demonstrates usage of FOR LOOPS while creating a simple Right Angled Triangle STAR pattern.
 * 
 * @author Suteerth Subramaniam
 */

#include <stdio.h>
int main()
{
    int i = 0, j = 0; //Declaring two integer variables for usage in FOR loops
    /*
    A for loop has 3 parts, the initialization section, the condition which is checked to iterate through the loop and the increment step.
    A loop will work with/without these 3 stages, HOWEVER, the semi colans must be provided.
    */
    for (i = 1; i <= 5; i++) //For every iteration of first loop, i number of stars are printed through another loop.
    {
        for (j = 1; j <= i; j++) //This 2nd for-loop is iterated i number of times printing a star character one by one.
        {
            printf("*"); 
        }
        printf("\n"); // After the loop has finished iterating through the 2nd for loop, to enter a new line, the new line character is used here.
        // There are many more characters which are used to customise the output, a list of common ones are available in the repository.
    }
    return 0;
}
