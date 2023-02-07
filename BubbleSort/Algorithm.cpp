#include <vector>
#include <iostream>
using namespace std;

void BubbleSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        cout << i << endl;
        bool ifCondition = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                ifCondition = true;
                swap(v[j], v[j + 1]);
            }
        }

        if (!ifCondition)
        {
            break;
        }
    }
}
void printArry(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // vector<int> v{10, 1, 7, 5, 14, 9};
    vector<int> v{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    BubbleSort(v);
    printArry(v);
}