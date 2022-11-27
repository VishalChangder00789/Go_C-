#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

// Confusion

void stringTokenizer(string s)
{
    int i = 0;
    int z = i;
    int j = 0;
    int count = 0;

    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            j = i - 1; // last word
            i++;
            if ((int)(char)s[z] < 65 || (int)(char)s[z] > 90 || (int)(char)s[z] < 97 && (int)(char)s[z] > 122)
            {
                count++;
            }
            cout << endl;
            z = i;
        }

        i++;
    }

    // Side case
    j = i - 1;
    for (int k = z; k <= j; k++)
    {
        cout << s[k];
    }
    if ((int)(char)s[z] < 65 || (int)(char)s[z] > 90 || (int)(char)s[z] < 97 && (int)(char)s[z] > 122)
    {
        count++;
    }
    cout << endl;
    cout << count << endl;
}

int main()
{
    string s = "a*n app*le *n a bas(ket";
    stringTokenizer(s);
}