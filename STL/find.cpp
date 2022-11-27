#include <iostream>
#include <algorithm>
using namespace std;

// Time Complexity : O(log(n)).

int main()
{
    int arr[] = {1, 10, 141, 6, 78, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cin >> key;

    auto it = find(arr, arr + n, 10);
    cout << *it;
}