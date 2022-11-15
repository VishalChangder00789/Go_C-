#include <iostream>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
}
void bubbleSort(int arr[], int n, bool (&cmp)(int a, int b))
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (cmp(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    bubbleSort(arr, n, compare);
    printArray(arr, n);
    return 0;
}