#include <iostream>
#include <cstring>
#include <string>
// if a string contians any upper case letter is called pagram
using namespace std;

int main()
{
    string s = "IloveYou";
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]) == true)
        {
            cout << i << "Pagram" << endl;
            return;
        }
    }

    cout << "NO" << endl;
    return 0;
}