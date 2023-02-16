#include <iostream>
#include <cstring>
using namespace std;

bool isPallindrome(char ch[])
{

    int i = 0;
    int j = strlen(ch) - 1; // strlen : used to calculate length of a character array

    while (i < j)
    {
        if (ch[i] != ch[j])
            return false;

        i++;
        j--;
    }

    return true;
}

int main()
{
    char ch[20];
    cin >> ch;

    bool res = isPallindrome(ch);
    cout << res << endl;
}