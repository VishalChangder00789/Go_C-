#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}

void printArray(vector<int> &v)
{
    for (auto i : v)
    {
        cout << i << endl;
    }
}

void sort_012_cp(vector<int> &v)
{
    int lo = 0;
    int hi = v.size() - 1;
    int mid = 0;

    while (mid <= hi)
    {
        switch (v[mid])
        {

        // If the element is 0
        case 0:
            swap(v[lo++], v[mid++]);
            break;

        // If the element is 1 .
        case 1:
            mid++;
            break;

        // If the element is 2
        case 2:
            swap(v[mid], v[hi--]);
            break;
        }
    }
}

void sort_012_op(vector<int> &v)
{

    int l = 0, m = 0, h = v.size() - 1;

    while (m <= h)
    {
        switch (v[m])
        {
        case 0:
            swap(v[l], v[m]);
            l++;
            m++;
            break;

        case 1:
            m++;
            break;

        case 2:

            swap(v[m], v[h]);
            h--;
            break;
        }
    }
}
void sort_012(vector<int> &v)
{

    int l = 0, m = 0, h = v.size() - 1;

    while (l < h)
    {
        if (v[m] == 0)
        {
            swap(v[l], v[m]);
            l++;
            m++;
        }
        else if (v[m] == 1)
        {
            m++;
        }
        else
        {
            swap(v[m], v[h]);
            h--;
        }
    }
}

int main()
{
    vector<int> v{0, 1, 2, 0, 1, 2};
    sort_012_op(v);
    // sort_012_cp(v);
    print_vector(v);
}
