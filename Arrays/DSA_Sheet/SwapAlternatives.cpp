/**
 * @file SwapAlternatives.cpp
 * @author Bishal Changder (you@domain.com)
 * @brief Swapping alternative elements in an array.
 *  For example :
 *
 *  1,2,3,4,5,6,7,8,9
 *  2,1,4,3,6,5,8,7,9
 * @version 0.1
 * @date 2023-01-19
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
using namespace std;

void swapAlternative(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 <= n)
        {
            int e = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = e;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    swapAlternative(arr, n);
    printArray(arr, n);
}