#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    BubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}