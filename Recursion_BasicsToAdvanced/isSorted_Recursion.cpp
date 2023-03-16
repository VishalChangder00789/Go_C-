#include <iostream>
#include <vector>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {

        bool remaining = isSorted(arr + 1, size - 1);
        return remaining;
    }
}

int main()
{
    // int arr[] = {2, 4, 6, 8, 1, 5, 0};
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (isSorted(arr, size))
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not sorted" << endl;
    }
}