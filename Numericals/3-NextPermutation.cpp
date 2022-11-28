#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void nextPermuation(vector<int> vec)
{
    next_permutation(vec.begin(), vec.end());

    for (int i : vec)
    {
        cout << i << ",";
    }
    cout << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    rotate(arr, arr + 2, arr + n);

    vector<int> vec = {100, 200, 300, 400, 500, 600};

    rotate(vec.begin(), vec.begin() + 2, vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " , ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> vec2 = {1, 2, 3, 4, 5, 6};
    nextPermuation(vec2);
}