#include <bits/stdc++.h>
using namespace std;

// In place sorting space complexity O(1).

void SelectionSort(int arr[], int n)
{
    // The last element at last will be already sorted
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        // find the minimum element
        // loop through till the last
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        swap(arr[i], arr[min_index]);
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

    // Input array
    printArray(arr, n);

    // calling selection sort
    SelectionSort(arr, n);

    // Sorted array
    printArray(arr, n);
}