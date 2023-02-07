#include <iostream>
#include <vector>
using namespace std;

void ReverseArray(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {
        swap(v[i], v[j]);
        i++;
        j--;
    }
}

void printArray(vector<int> &v)
{
    int i = 0;
    while (i < v.size())
    {
        cout << v[i] << " ";
        i++;
    }
}
int main()
{

    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    ReverseArray(v);
    printArray(v);
}