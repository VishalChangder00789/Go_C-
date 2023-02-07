#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> &v)
{
    int i = 0;
    while (i < v.size())
    {
        cout << v[i] << " ";
        i++;
    }
}
vector<int> MergeSortedArrays(vector<int> &a, vector<int> &b)
{
    // vector<int> m(a.size() + b.size());  // vector with size mentioned
    vector<int> m;
    int i = 0;
    int j = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            m.push_back(a[i]);
            i++;
        }
        else if (b[j] < a[i])
        {
            m.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size())
    {
        m.push_back(a[i]);
        i++;
    }

    while (j < b.size())
    {
        m.push_back(b[j]);
        j++;
    }

    return m;
}

int main()
{
    vector<int> a{4, 8, 12, 16, 20, 24, 28}, b{2, 6, 10, 14, 22};
    vector<int> c = MergeSortedArrays(a, b);
    printArray(c);
}
