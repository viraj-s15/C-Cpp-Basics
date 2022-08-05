#include <stdio.h>
/* Insertion sort works on the principle of creating a temporary value, and maintaining a sorted and unsorted sublist
 * We sort 2 given elements at a time
 */
// Function prototyping, their names are self explanatory
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
    int i, key, j;
    // We start off at i because the first element is technically in a sublist of size 1, and a single element sublist is ALWAYS sorted
    for (i = 1; i < n; i++)
    {
        key = array[i]; // We store the ith element into the key 
        j = i - 1; // We want to see if the sorted list elements are unsorted with respect to key
        while (j >= 0 && array[j] > key) // j is left of i or i - 1 and shouldn't go beyond 0
        // j is essentiall i-1, so, its LHS and key is RHS, we perform this shift until LHS > RHS which is not what we need in final array which is sorted in an ascending order
        {   
            // We shift the element to left and perform this shifting until base conditon is met
            array[j + 1] = array[j];
            j = j - 1; 
        }
        array[j + 1] = key;
    }
    printf("\nSorted array\n");
    printArray(array, n);
    return 0;
}
void printArray(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
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