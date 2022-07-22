/*
 * This program demonstrates the usage of while and do...while loops while highlighting the difference between the two as well.
 * Sample Input and Output is provided at the end of the program.
 * @author Suteerth Subramaniam
 *
 */
#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (i <= n) //The loop will first check the condition before executing the code within the while loop.
    {
        printf("Iteration %d\n",i);
        i++;
    }
    i = n + 1; //This is to make the while condition false
    do
    {
        printf("Iteration from do while.\n"); //To see whether the code within the do...while loop is executed at least once or not.
        i++;
    } while (i <= n);
    printf("The Value of n is %d\n", n);
    printf("The Value of i after all operations is %d\n", i); //You will observe that the value of i is n+2 which means that the do...while code WAS executed.
    return 0;
}
/*
Enter a number : 5
Iteration 1
Iteration 2
Iteration 3
Iteration 4
Iteration 5
Iteration from do while.
The Value of n is 5
The Value of i after all operations is 7
*/
