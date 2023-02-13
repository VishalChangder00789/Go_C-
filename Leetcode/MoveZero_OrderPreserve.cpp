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
void MoveZeroRight_OrderPreserve(vector<int> &a)
{
    int i = 0;
    int j = 0;

    while (j < a.size())
    {
        if (a[j] == 0)
        {
            j++;
        }
        else
        {
            swap(a[i], a[j]);
            i++;
            j++;
        }
    }
}

int main()
{
    // vector<int> v{0, 1, 0, 3, 12, 0};
    vector<int> v{1, 0, 1, 0, 3, 12, 0, 0, 0, 0, 0};
    // vector<int> v{0};

    MoveZeroRight_OrderPreserve(v);
    printArray(v);
}