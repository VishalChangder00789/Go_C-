#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key, int i)
{

    if (n == 0)
    {
        return -1;
    }

    if (arr[0] == key)
    {
        return i;
    }

    LinearSearch(arr + 1, n, key, i + 1);

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << LinearSearch(arr, n, 18, 0);
}