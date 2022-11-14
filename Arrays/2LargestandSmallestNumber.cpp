#include <bits/stdc++.h>
using namespace std;

pair<int, int> findMinandMax(int arr[], int n)
{
    int max = INT_MIN;
    int min = INT_MAX;

    // for largest
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return {max, min};
}
int main()
{
    int arr1[] = {10, 24, 88, 101, 64, 2, -1, 44, 250, 248, 158, 169, 178};
    int arr[1000]; // at this point it is containing garbage values
    int n;
    pair<int, int> p;

    // cin >> n;

    // // taking inputs for the array
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    p = findMinandMax(arr1, (sizeof(arr1) / sizeof(arr[0])));
    cout << "Maximum : " << p.first << ", Minimum is : " << p.second << endl;
    return 0;
}