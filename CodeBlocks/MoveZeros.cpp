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

void MoveZeros_Left(vector<int> &v)
{
    int i = 0, j = 0;

    while (j < v.size())
    {

        if (v[j] == 0)
        {
            swap(v[i], v[j]);
            i++;
            j++;
        }
        else if (v[j] != 0)
        {
            j++;
        }
    }
}
void MoveZeros_Right(vector<int> &v)
{
    int i = v.size() - 1, j = v.size() - 1;

    while (j >= 0)
    {

        if (v[j] == 0)
        {
            swap(v[i], v[j]);
            i--;
        }
        j--;
    }
}

int main()
{
    vector<int> v{1, 0, 1, 0, 3, 12, 0, 0, 0, 0, 0};
    MoveZeros_Left(v);
    printArray(v);
    cout << endl;
    // vector<int> v1{1, 0, 1, 0, 3, 12, 0, 0, 0, 0, 0};
    vector<int> v1{0, 1, 0, 3, 12};
    MoveZeros_Right(v1);
    printArray(v1);
}