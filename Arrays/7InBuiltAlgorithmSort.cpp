#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return b > a;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
}

// Always pass arr,arr+n
// internally the n will be taken as n-1.

int main()
{
    int arr[] = {4, 7, 8, 4, 6, 93, 2, 14, 45, 12, 10, 5, 6, 7, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    sort(arr, arr + n, compare);
    printArray(arr, n);
}