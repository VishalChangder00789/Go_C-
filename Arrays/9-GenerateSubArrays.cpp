#include <iostream>
using namespace std;

void GenerateSubArrays(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " , ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int arr[] = {-4, 1, 3, -2, 6, 2, -1, -4, -7};
    int n = sizeof(arr) / sizeof(arr[0]);

    GenerateSubArrays(arr, n);
}