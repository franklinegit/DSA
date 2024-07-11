#include "main.h"

/**
 * @brief Function finds a target by binary search
 * 
 * @param arr Array of integers
 * @param size Size of the array
 * @param target Target to be found in the array
 * @return int 
 */
int BinarySearch(int arr[], int size, int target)
{
    int start = 0, end = size - 1;

    printf("Performing Binary Search...\n\n");
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            printf("Target found in the array at index %d.\n\n", mid);
            return (mid);
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid -1;
        }
    }
    return (-1);
}