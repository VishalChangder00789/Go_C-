#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        // base case
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        { // go right
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return -1;
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

    int index = BinarySearch(arr, n, 11);
    cout << "Index : " << index << endl;
}