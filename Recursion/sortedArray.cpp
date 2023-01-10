#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{

    // super base
    if (n == 0 || n == 1)
    {
        return true;
    }

    // base case

    if (arr[0] < arr[1] && isSorted(arr + 1, n - 1))
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 14, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool result = isSorted(arr, n);

    if (result == 0)
    {
        cout << "No sorted" << endl;
    }
    else
    {
        cout << "Sorted Array" << endl;
    }
}