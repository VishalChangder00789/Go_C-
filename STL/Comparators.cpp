#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

bool compare(int a, int b)
{
    return a < b;
}
void bubbleSort(int arr[], int n, bool (&compare)(int a, int b))
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 0; j <= (n - i - 1); j++)
        {
            if (compare(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    return;
}
int main()
{

    int arr[] = {1, 23, 4, 5, 6, 7, 89, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n, compare); // Polymorphism
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}