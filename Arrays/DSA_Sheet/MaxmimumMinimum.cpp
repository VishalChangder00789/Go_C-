#include <iostream>
using namespace std;

int maximumElement(int a[], int n)
{

    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}
int getMax(int a[], int n)
{
    int max_e = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        max_e = max(max_e, a[i]);
    }

    return max_e;
}

int getMin(int a[], int n)
{
    int min_e = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        min_e = min(min_e, a[i]);
    }

    return min_e;
}

int minimumElement(int a[], int n)
{
    int min = 99999;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int arr[] = {14, 17, 19, 5, 1, 2, 3, 6, 65, 78, 77, 45, 42, 26, 23, 28, 32, 37, 36, 31, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Element is : " << maximumElement(arr, n) << endl;
    cout << "Minimum Element is : " << minimumElement(arr, n) << endl;
    cout << "Maximum Element is $_ppp : " << getMax(arr, n) << endl;
    cout << "Minimum Element is $_ppp : " << getMin(arr, n) << endl;
}