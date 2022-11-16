// It is important to read sentences with spaces included.
// C++ already includes a method called cin.getline(a,1000,delim);
// Alternatively same polymorphed method cin.getline(a,1000);
#include <iostream>
using namespace std;

void readline(char a[], int maxLength)
{

    int i = 0;
    char ch = cin.get();

    while (ch != '\n')
    {
        a[i] = ch;
        i++;
        if (i == maxLength - 1)
        {
            break;
        }

        ch = cin.get();
    }

    // at the last
    a[i] = '\0';
    return;
}
int main()
{

    // char a[1000];
    // readline(a, 10);
    // cout << a;

    char s[10];
    cin >> s;
    cout << s;
}