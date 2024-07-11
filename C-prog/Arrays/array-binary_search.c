#include <stdio.h>

void SortArray(int arr[]);
int TargetIndex(int arr[]);
int GetTarget();
void DisplayArrayElements();


int main(void)
{
    int arr[] = {3, 75, 43, 18, 51, 9, 14, 57, 83, 26};

    SortArray(arr);

    return (0);
}