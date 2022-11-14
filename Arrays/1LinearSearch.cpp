#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        // base case
        if (arr[i] == element)
        {
            cout << "Index : " << i << endl;
            return true;
        }
    }

    return false;
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

    // calling the method
    if (linearSearch(arr, n, 16) == true)
    {
        cout << "Element present" << endl;
    }
    else
    {
        cout << "Element not present" << endl;
    }

    return 0;
}
