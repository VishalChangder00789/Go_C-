#include <iostream>
#include <string>
using namespace std;

int stringToInt(string s)
{
    int ans = 0;
    int p = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += (s[i] - '0') * p;
        p *= 10;
    }

    return ans;
}
int main()
{
    string s = "98";
    int num = stringToInt(s);
    cout << num << endl;
}