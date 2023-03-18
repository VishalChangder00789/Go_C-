#include <iostream>

using namespace std;

void merge(int arr[], int s, int m, int e)
{
    int *temp = new int[e - s + 1];

    int index1 = s;
    int index2 = m + 1;
    int k = 0;

    while (index1 <= m && index2 <= e)
    {
        if (arr[index1] <= arr[index2])
        {
            temp[k++] = arr[index1++];
        }
        else
        {
            temp[k++] = arr[index2++];
        }
    }

    while (index1 <= m)
    {
        temp[k++] = arr[index1++];
    }
    while (index2 <= e)
    {
        temp[k++] = arr[index2++];
    }

    // k ending point
    int z = s;
    for (int i = 0; i < k; i++)
    {
        arr[z++] = temp[i];
    }
}

void mergeSort(int arr[], int s, int e)
{

    if (s >= e)
    {
        return;
    }

    int m = s + (e - s) / 2;

    mergeSort(arr, s, m);
    mergeSort(arr, m + 1, e);
    merge(arr, s, m, e);
}

int main()
{
    int arr[] = {2, 5, 1, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}