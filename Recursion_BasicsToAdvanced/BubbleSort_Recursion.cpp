#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(vector<int> &v, int n)
{

    if (n == 0 || n == 1)
    {
        return;
    }

    // create first iteration
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            swap(v[i], v[i + 1]);
        }
    }

    BubbleSort(v, n - 1);
}

int main()
{
    vector<int> v{10, 9, 2, 4, 8, 7, 1};
    int n = v.size();

    BubbleSort(v, n);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}