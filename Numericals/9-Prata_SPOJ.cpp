#include <iostream>
using namespace std;

bool isPossible(int arr[], int chefs, int pratas, int timeTaken)
{
    int prataCount = 0;
    int sum = 0;
    for (int i = 1; i <= chefs; i++)
    {
        for (int j = 1; j <= timeTaken; j++)
        {
            // First mistake
            sum += arr[i - 1] * j;
            // cout << "Val : " << sum << endl;
            if (sum > timeTaken)
            {
                sum = 0;
                break;
            }
            else
            {
                prataCount++;
            }
            // cout << "Pratas Count : " << prataCount << endl;
            if (prataCount >= pratas)
            {
                return true;
            }
        }
    }
    if (prataCount < pratas)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int DistributePrata(int arr[], int chefs, int pratas)
{

    int s = 0;
    int e = (pratas * (pratas + 1)) / 2;
    int ans = 0;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (isPossible(arr, chefs, pratas, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}
int main()
{

    int chefs_level[1000];
    int chefs;
    int pratas;
    cin >> chefs >> pratas;

    // input for the array
    for (int i = 0; i < chefs; i++)
    {
        cin >> chefs_level[i];
    }

    int res = DistributePrata(chefs_level, chefs, pratas);
    cout << res << endl;

    // bool res = isPossible(chefs_level, chefs, pratas, 27);
    // cout << res << endl;
}