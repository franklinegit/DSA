#include "main.h"

/**
 * @brief Function that does insertion sorting
 * 
 * @param arr Array of integers
 * @param size Size of array
 */
void InsertionSort(int arr[], int size)
{
    int i, j, temp;

    printf("Insertion Sorting the array...\n");
    for (i = 1; i < size; i ++)
    {
        temp =  arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    printf("Insertion Sorting Done.\n\n");
}