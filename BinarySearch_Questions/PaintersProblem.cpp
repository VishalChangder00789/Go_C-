#include <iostream>
#include <vector>

using namespace std;

bool isPossibleSolution(vector<int> &walls, int k, int mid)
{
    int sum = 0;
    int painter = 1;

    for (int i = 0; i < walls.size(); i++)
    {
        if (sum + walls[i] <= mid)
        {
            sum += walls[i];
        }
        else
        {
            painter++;
            if (painter > k || walls[i] > mid)
            {
                return false;
            }

            sum = walls[i];
        }
    }

    return true;
}
int PaintersProblem(vector<int> &walls, int k)
{

    int s = 0;
    int e = 0;
    int ans = -1;

    for (int i = 0; i < walls.size(); i++)
    {
        e += walls[i];
    }

    while (s <= e)
    {

        int mid = s + (e - s) / 2;

        if (isPossibleSolution(walls, k, mid))
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
    vector<int> walls{5, 5, 5, 5};
    cout << PaintersProblem(walls, 2);
    // cout << isPossibleSolution(walls, 2, 7);
}