#include <stdio.h>
// Function prototyping for self explanatory function names
void printArray(int array[], int n); 
void takeInput(int array[], int n);
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int array[n];
    takeInput(array, n);
    printf("Unsorted array\n");
    printArray(array, n);
    int i, temp, j;
    // We basically compare all elements in the list swapping them if condition is met
    // And we do this until the entire array gets sorted
    // There is an optimized version, which I have provided in my DSA repository
    // Here we, stick to the basics
    for (i = 0; i < n - 1; i++) 
    {
        //Obviously we don't have anything to compare to, when it comes the the last element in the array
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {   
                // The condition is self explanatory, we compare j and j+1 element and swap if LHS > RHS which we don't want in Ascending Ordered List
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("\nSorted array\n");
    printArray(array, n);
    return 0;
}
void printArray(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", array[i]); // Yes you can implement for loops like this, when there is only one statement to execute in the loop
    printf("\n");
}
void takeInput(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d", i);
        scanf("%d", array + i);
    }
}