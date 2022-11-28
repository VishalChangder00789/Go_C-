#include <iostream>

// Very important TC : (logn + p).
using namespace std;

float SquareRoot(int key, int p)
{

    float ans = -1;
    int s = 0;
    int e = key;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        int pow = mid * mid;
        if (pow == key)
        {
            return mid;
        }
        else if (pow > key)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }

    // Finding the floating part
    // Brute Force
    float inc = 0.1;
    for (int times = 1; times <= p; times++)
    {
        while (ans * ans <= key)
        {
            ans = ans + inc;
        }
        // overshot the value
        ans = ans - inc;
        inc = inc / 10;
    }

    return ans;
}

int main()
{
    int key = 50;
    int p = 3;
    float result = SquareRoot(key, p);
    cout << result << endl;
    return 0;
}