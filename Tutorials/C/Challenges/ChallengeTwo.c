#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> // To use boolean features
// Function prototyping done below, int* corresponds to address of the first element in the array
void binsearch(int *, int, int);
int indexFinder(int *, int, int);
void insertion(int *, int, int, int);
void deletion(int *, int, int);
void display(int *, int);
void insertionSort(int *, int);
int main()
{
    int *list = NULL; // We initialize our array pointer to NULL first
    int input, value, value2;
    bool state = true;
    printf("Enter number of elements you want to enter : ");
    int n;
    scanf("%d", &n);
    list = (int *)calloc(n, (sizeof(int))); // DMA Array creation
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", list + i);
    }
    insertionSort(list, n);
    while (state)
    {
        printf("\nList Operations\n");
        printf("1 for Insertion\n");
        printf("2 for Deletion\n");
        printf("3 for Search\n");
        printf("4 for Diplay\n");
        printf("Any other value to terminate operations : ");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("\nEnter element to insert ");
            scanf("%d", &value);
            display(list, n);
            value2 = indexFinder(list, n, value);
            printf("%d\n",value2);
            n++; // Size n is changed dynamically throughout the program
            insertion(list, n, value, value2);
            printf("Inserted %d at %d\n", value, value2);
            break;

        case 2:
            printf("\n");
            display(list, n);
            printf("Enter index to delete : ");
            scanf("%d", &value2);
            while (value2 >= n || value2 < 0)
            { // We don't want the user to enter anything beyond last index value so we implement this
                printf("Enter valid index! : ");
                scanf("%d", &value2);
            }
            deletion(list, n, value2);
            n--; // Size n is changed dynamically throughout the program
            break;
        case 3:
            printf("\n");
            display(list, n);
            printf("\nEnter element to search ");
            scanf("%d", &value);
            binsearch(list, n, value);
            break;
        case 4:
            if (n < 0)
            {
                printf("\nEMPTY LIST\n");
                break;
            }
            printf("\nDisplaying List\n");
            display(list, n);
            break;
        default:
            state = false;
            free(list);
            break;
        }
    }
    return 0;
}
void display(int *array, int size)
{
    // Simple for loop to display all elements in the array
    for (int i = 0; i < size; i++)
    {
        printf("Element %d = %d\n", i, *(array + i));
    }
}
void insertion(int *array, int size, int input, int index)
{
    // Size we are taking in incremented size (n), we proceed to directly reallocate to accomodate one more element
    array = realloc(array, size);
    for (int i = size - 1; i > index; i--)
    {
        array[i] = array[i - 1]; // We shift all elements to right (i-1 becomes i) creating space at index we want to insert element at
    }
    *(array + index) = input;
}
void deletion(int *array, int size, int index)
{
    // Since we are taking in n value without deletion, we perform realloc with size - 1
    printf("\nDeleted element %d from index %d\n", array, index);
    for (int i = index; i < size - 1; i++)
    {
        *(array + i) = *(array + i + 1); // We shift all elements to left (i becomes i-1) consuming the index in question
    }
    array = realloc(array, size - 1);
}
void binsearch(int *array, int size, int val)
{
    int upper_bound = size - 1, mid, lower_bound = 0;
    mid = (upper_bound + lower_bound) / 2; //  Definition of mid
    while (lower_bound < upper_bound)
    {
        mid = (lower_bound + upper_bound) / 2;
        if (array[mid] == val)
        {
            for (int i = mid; array[i] == val; i++)
            {
                printf("Element found at %d\n", i);
            }
            break; // Exit the loop once we have found a match
        }
        else if (array[mid] > val) // If the mid value is larger than the target value, the sublist is in lower half
        {
            upper_bound = mid - 1; // We change the mid value accordingly
        }
        else // If the mid value is larger than the target value, the sublist is in upper half
        {
            lower_bound = mid + 1; // We change the mid value accordingly
        }
    }
    if (upper_bound == lower_bound)
    {
        printf("No match found\n");
    }
}
int indexFinder(int *array, int size, int target)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (array[i] > target) // This is one of my used codes in a leetcode problem
        {
            // If the element is greater than the target, we need to insert the element at that position
            return i;
        }
        // In case, there's no match, because i++ is still incremented before for loop condition check, returning I means that the target should be inserted at the end
    }
    return (i);
}
void insertionSort(int *array, int size)
{
    int key, i, j;
    for (i = 1; i < size; i++)
    {
        key = array[i];                  // We store the ith element into the key
        j = i - 1;                       // We want to see if the sorted list elements are unsorted with respect to key
        while (j >= 0 && array[j] > key) // j is left of i or i - 1 and shouldn't go beyond 0
        // j is essentiall i-1, so, its LHS and key is RHS, we perform this shift until LHS > RHS which is not what we need in final array which is sorted in an ascending order
        {
            // We shift the element to left and perform this shifting until base conditon is met
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}