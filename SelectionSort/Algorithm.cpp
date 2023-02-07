#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void SelectionSort(vector<int> &v)
{
    int n = v.size();

    for (int i = 0; i < (n - 1); i++)
    {
        int minIndex = -1;

        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }

        // int temp = v[i];
        // v[i] = v[minIndex];
        // v[minIndex] = temp;
        swap(v[minIndex], v[i]);
    }
}

int main()
{
    vector<int> v{64, 25, 12, 23, 11};
    // vector<int> v{1, 7, 9, 2, 3, 0};
    SelectionSort(v);
    printArray(v);
}