#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

// do comparision based on lengths of the string
bool compare(string a, string b)
{
    a.length() < b.length();
}

int main()
{
    string s[100];
    int n;
    cin >> n;
    cin.get();

    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }

    sort(s, s + n);
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }

    sort(s, s + n, compare);
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Entering" << endl;
        cout << s[i] << endl;
    }
}