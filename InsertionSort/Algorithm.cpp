#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void InsertionSort(vector<int> &v)
{

    for (int i = 1; i < v.size(); i++)
    {
        int j = i - 1;
        int el = v[i];
        while (j >= 0 && v[j] > el)
        {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = el;
    }
}

int main()
{
    // vector<int> v{5, 2, 6, 9, 3, 1};
    // vector<int> v{6, 5, 4, 3, 2, 1};
    // vector<int> v{4, 12, 11, 20};
    vector<int> v{10, 1, 7, 4, 8, 2, 11};
    InsertionSort(v);
    printArray(v);
}