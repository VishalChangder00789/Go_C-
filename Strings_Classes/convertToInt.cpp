#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int convertToInt(string s)
{

    int ans = 0;
    int p = 1;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += ((s[i] - '0') * p);
        cout << ans << endl;
        p *= 10;
    }

    return ans;
}
int main()
{
    string num = "148856897";
    cout << convertToInt(num);
}