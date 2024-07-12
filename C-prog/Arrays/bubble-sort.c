#include "main.h"


/**
 * @brief Function that sorts an array through bubble sorting
 * 
 * @param arr Array to be sorted
 * @param size Size of array to be sorted
 */
void BubbleSort(int arr[], int size)
{
    /* Bubble Sort repeatedly steps through the list, */
    /* compares adjacent elements, and swaps them if they are in the wrong order. */
    /* It continues this process until the list is sorted. */
    int i =0, j = 0, temp = 0;
    
    printf("Selection sorting the array...\n");
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                /* Swap elements */
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Selection sorting Done.\n\n");
}