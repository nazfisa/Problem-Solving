#include <stdio.h>

void insertion_sort ( int A[ ] , int n)
{
    for( int i = 0 ; i < n ; i++ )
    {
        /*storing current element whose left side is checked for its
                 correct position .*/

        int temp = A[i];
        int j = i;

        /* check whether the adjacent element in left side is greater or
             less than the current element. */

        while( temp < A[j-1] && j > 0 )
        {

            // moving the left side element to one position forward.
            A[j] = A[j-1];
            j--;

        }
        // moving current element to its  correct position.
        A[j] = temp;
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    //int n = sizeof(arr)/sizeof(arr[0]);
    int n = 7;
    insertion_sort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
