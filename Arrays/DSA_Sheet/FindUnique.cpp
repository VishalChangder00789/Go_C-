/**
 * @file FindUnique.cpp
 * @author Bishal Changder : changdervishal1999@gmail.com
 * @brief Finding a unique element in the array with multiple similar elements.
 * @version 0.1
 * @date 2023-01-20
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
using namespace std;

int _brute_FindUnique(int *arr, int n)
{
    // Space complexity = o(n)
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int el = arr[i];
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == el)
            {
                count++;
            }
        }

        if (count == 1)
        {
            return el;
        }
    }
}

int _op_FindUnique(int arr[], int n)
{
    /**
     * @brief using XOR properties
     *  a^a = 0;
     * 0^a = a;
     *
     */

    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        unique = unique ^ arr[i];
    }

    return unique;
}

int main()
{
    int arr[] = {2, 3, 7, 6, 3, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int element = _brute_FindUnique(arr, n);
    cout << element << endl;

    int elem = _op_FindUnique(arr, n);
    cout << elem << endl;
}
