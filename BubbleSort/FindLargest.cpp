#include <iostream>
#include <vector>

using namespace std;

// Only drawback is that it disturbes the array

int getLargest(vector<int> &v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            swap(v[i], v[i + 1]);
        }
    }

    return v[v.size() - 1];
}

int main()
{
    vector<int> v{19, 20, 1, 2, 58, 6, 3};
    cout << getLargest(v);
}