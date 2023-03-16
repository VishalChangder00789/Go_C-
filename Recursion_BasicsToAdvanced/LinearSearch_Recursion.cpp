#include <iostream>
#include <vector>
using namespace std;

bool LinearSearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }

    // if (size == 1 && arr[0] == key)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        LinearSearch(arr + 1, size - 1, key);
    }
}

int main()
{
    int arr[] = {1, 7, 8, 9, 6, 5, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    cout << LinearSearch(arr, size, key);
}
