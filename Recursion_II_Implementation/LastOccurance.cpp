#include <iostream>
using namespace std;

int LastOccurance(int arr[], int n, int key, int i, int j)
{
    if (n == 0)
    {
        return j;
    }

    if (arr[0] == key)
    {
        j = i;
        LastOccurance(arr + 1, n - 1, key, i + 1, j);
    }
    else
    {
        LastOccurance(arr + 1, n - 1, key, i + 1, j);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = -1;
    int key = 19;
    int idx = -1;
    idx = LastOccurance(arr, n, key, i, j);
    if (idx == -1)
    {
        cout << "Success nahi hai" << endl;
    }
    else
    {
        cout << idx << endl;
    }
}