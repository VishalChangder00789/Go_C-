#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int e = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > e)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = e;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << arr[i] << endl;
        }
        else
        {
            cout << arr[i] << " , ";
        }
    }
}
int main()
{
    int arr[1000]; // at this point it is containing garbage values
    int n;
    cin >> n;

    // taking inputs for the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, n);
    InsertionSort(arr, n);
    printArray(arr, n);

    return 0;
}