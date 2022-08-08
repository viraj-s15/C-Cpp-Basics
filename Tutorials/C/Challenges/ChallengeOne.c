#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> // To use boolean features
// Function prototyping done below, int* corresponds to address of the first element in the array
void linearsearch(int *, int, int); 
void insertion(int *, int, int, int);
void deletion(int *, int, int);
void display(int *, int);
void display_two(int*, int);
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
            printf("Enter index to insert : ");
            scanf("%d", &value2); 
            while(value2 > n || value2 < 0){ // We don't want the user to enter anything beyond last index + 1 value so we implement this
                printf("Enter valid index! : ");
                scanf("%d", &value2);
            }
            n++; // Size n is changed dynamically throughout the program
            insertion(list, n, value, value2);
            printf("Inserted %d at %d\n", value, value2);
            break;

        case 2:
            printf("\n");
            display(list, n);
            printf("Enter index to delete : ");
            scanf("%d", &value2);
            while(value2 >= n || value2 < 0){ // We don't want the user to enter anything beyond last index value so we implement this
                printf("Enter valid index! : ");
                scanf("%d", &value2);
            }
            n--; // Size n is changed dynamically throughout the program
            deletion(list, n, value2);
            break;
        case 3:
            printf("\n");
            display(list, n);
            printf("\nEnter element to search ");
            scanf("%d", &value);
            linearsearch(list, n, value);
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
    //Size we are taking in incremented size (n), we proceed to directly reallocate to accomodate one more element
    array = realloc(array, size*sizeof(int));
    for (int i = size - 1; i > index; i--)
    {
        array[i] = array[i - 1]; // We shift all elements to right (i-1 becomes i) creating space at index we want to insert element at
    }
    *(array + index) = input;
}
void deletion(int *array, int size, int index)
{   
    // Since we are taking in n value without deletion, we perform realloc with size - 1
    printf("\nDeleted element %d from index %d\n",*(array+index),index);
    for (int i = index; i <= size  ; i++)
    {
        array[i]=array[i+1]; // We shift all elements to left (i becomes i-1) consuming the index in question
    }
    array = realloc(array, size*sizeof(int));
    
}
void display_two(int *array, int size)
{   
    // Simple for loop to display all elements in the array
    for (int i = 0; i < size; i++)
    {
        printf("Index = %d\n", *(array + i));
    }
}
void linearsearch(int *array, int size, int val)
{   
    // Simple linear search problem which iterates throught the loop and performs operations if a match is found
    int *indices = (int *)calloc(0, (sizeof(int)));
    bool found = false;
    int searches=0;
    for (int i = 0; i < size; i++)
    {
        if (*(array + i) == val)
        {
            searches++;
            indices = realloc(indices, searches);
            *(indices + searches - 1) = i;
            found = true;
        }
    }
    if (found)
    {
        printf("\nMatches found at\n");
        display(indices, searches);
    }
    else
    {
        printf("No Match found!\n");
    }
}