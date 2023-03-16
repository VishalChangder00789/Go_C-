#include <iostream>
#include <string>
using namespace std;

void PrintStringReverse(string s, int index)
{
    if (index == s.length())
    {
        return;
    }

    PrintStringReverse(s, index + 1);
    cout << s[index];
    return;
}

int main()
{
    string s = "your name is in reverse";
    string s_rev = "esrever ni si eman ruoy";
    PrintStringReverse(s_rev, 0);
}
