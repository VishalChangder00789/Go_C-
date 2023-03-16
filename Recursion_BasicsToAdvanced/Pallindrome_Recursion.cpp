#include <iostream>
using namespace std;

string RevereseString(string str_p, int s, int e)
{
    cout << str_p << endl;
    string str = str_p;

    if (s > e)
    {
        return str;
    }

    swap(str[s], str[e]);
    RevereseString(str, s + 1, e - 1);
}

bool isPallindrome(string &str)
{
    int i = 0;
    int n = str.size();
    string new_str = RevereseString(str, i, n - i - 1);
    cout << "New String is :" << new_str << endl;

    if (new_str == str)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s = "abbbaccc";
    if (isPallindrome(s))
    {
        cout << "Pallindrome" << endl;
    }
    else
    {
        cout << "Not Pallindrome" << endl;
    }
}