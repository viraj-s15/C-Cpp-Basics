/*
 * This program demonstrates usage of FOR LOOPS while performing alphabet logic to print an X like pattern based on odd numbers
 *
 * @author Suteerth Subramaniam
 */

#include <stdio.h>
int main()
{
    int n;
    printf("Enter an odd number : ");
    scanf("%d", &n);
    while (n % 2 == 0) // Simple loop to make sure the entered number is odd only, using the modulus operator
    {
        printf("Please enter odd numbers only : ");
        scanf("%d", &n);
    }
    // ASCII for A is 65
    /*
     * We want to print a pattern X using logic involving characters in this format
     * For input 5
     *
     * A   E
     *  B D
     *   C
     *  B D
     * A   E
     *
     */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1) // Second condition is necessary because A is to be printed twice, at i = 0 and j = 0 and i = 5 and j = 0
            {                             // The two conditions alone provide us a formula to use to get our desired pattern.
                printf("%c", 65 + j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
