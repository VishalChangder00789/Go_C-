#include <string>
#include <iostream>
using namespace std;

// Pass by reference
void ReverseString(string &s, int st, int e)
{
    if (st > e)
    {
        return;
    }

    ReverseString(s, st + 1, e - 1);
    swap(s[st], s[e]);
    cout << s[st] << " -> " << s[e] << endl;
}

int main()
{
    string s = "esrever ni si eman ruoy";
    ReverseString(s, 0, s.size() - 1);

    cout << s << endl;
}
