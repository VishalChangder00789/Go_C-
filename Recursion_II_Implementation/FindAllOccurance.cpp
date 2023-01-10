#include <iostream>
using namespace std;

void FindAllOccurance(int arr[], int n, int key, int i)
{
    if (n == 0)
    {
        return;
    }

    if (arr[0] == key)
    {
        cout << i << endl;
        FindAllOccurance(arr + 1, n - 1, key, i + 1);
    }
    else
    {
        FindAllOccurance(arr + 1, n - 1, key, i + 1);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 7, 8, 9, 7, 10, 11, 12, 7, 13, 14, 15, 7, 16, 17, 18, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    FindAllOccurance(arr, n, key, 0);
}