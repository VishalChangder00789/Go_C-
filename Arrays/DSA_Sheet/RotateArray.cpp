#include <iostream>
using namespace std;

void ReverseArray_OnceLeft(int arr[], int n)
{
    int e = arr[0];

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = e;
}

void ReverseArray_OnceRight(int arr[], int n)
{
    int e = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = e;
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
    int arr[] = {5, 7, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    ReverseArray_OnceLeft(arr, n);
    printArray(arr, n);
    ReverseArray_OnceRight(arr, n);
    printArray(arr, n);
}