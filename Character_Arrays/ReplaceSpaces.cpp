#include <iostream>
using namespace std;

void ReplaceSpaces(string &s)
{
    string temp = "";
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }

        i++;
    }

    cout << temp;
}

int main()
{
    string s = "My name is Bishal";
    ReplaceSpaces(s);
}