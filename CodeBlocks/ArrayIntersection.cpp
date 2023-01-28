#include <iostream>
#include <vector>
using namespace std;

vector<int> ArrayIntersection_BruteForce(vector<int> arr1, int n, vector<int> arr2, int m)
{
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int el = arr1[i];

        for (int j = 0; j < m; j++)
        {
            if (el < arr2[j])
            {
                break;
            }

            if (el == arr2[j])
            {
                ans.push_back(el);
                arr2[j] *= -1;
                break;
            }
        }
    }

    return ans;
}

vector<int> ArrayIntersection(vector<int> arr1, int n, vector<int> arr2, int m)
{
    vector<int> ans;

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr1{1, 2, 2, 3, 4, 5};
    vector<int> arr2{2, 2, 3, 3};
    // vector<int> ans = ArrayIntersection(arr1, arr1.size(), arr2, arr2.size());
    vector<int> ans = ArrayIntersection_BruteForce(arr1, arr1.size(), arr2, arr2.size());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}