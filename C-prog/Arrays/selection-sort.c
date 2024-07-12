#include "main.h"

/**
 * @brief Function that does selection sorting
 * 
 * @param arr Array of integers
 * @param size Size of array
 */
void SelectionSort(int arr[], int size)
{
    /* Selection Sort divides the input list into two parts */
    /* The sublist of items already sorted and the sublist of items remaining to be sorted. */
    /* It repeatedly selects the smallest (or largest) element from the unsorted sublist, */
    /* swaps it with the leftmost unsorted element, and moves the sublist boundaries one element to the right. */
    int i = 0, j = 0, min_idx = 0, temp = 0;

    printf("Selection sorting the array...\n");
    for (i = 0; i < size -1; i++)
    {
        /* Outer loop moves the boundary of the unsorted subarray. */
        min_idx = i;

        for (j = i + 1; j < size; j++)
        {
            /* This loop finds the smallest element in the unsorted part of the array. */
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = i;
        arr[i] = temp;
    }
    printf("Selection sorting Done.\n\n");
}