#include <iostream>
#include <string>
using namespace std;

bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }

    return false;
}

bool isValidPallindrome(string s)
{

    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {

        if (!isValid(s[i]))
        {
            i++;
        }
        else if (!isValid(s[j]))
        {
            j--;
        }
        else if ((isValid(s[i]) && isValid(s[j])) && (tolower(s[i]) == tolower(s[j])))
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s = "ab;ba:,A:b,;B,a";
    bool res = isValidPallindrome(s);
    if (res == 1)
    {
        cout << "Pallindrome" << endl;
    }
    else
    {
        cout << "Not Pallindrome" << endl;
    }
}