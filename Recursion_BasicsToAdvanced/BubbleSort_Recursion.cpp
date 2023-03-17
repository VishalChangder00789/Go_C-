#include <iostream>
#include <vector>

using namespace std;

void BubbleSort_norm(vector<int> &v, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

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

    // BubbleSort(v, n);
    BubbleSort_norm(v, n);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}