#include <iostream>
#include <string> // contains getline
#include <cstring>
using namespace std;

string extractStringAtKey(string s, int key)
{

    char *input = strtok((char *)s.c_str(), " ");
    while (key > 1)
    {
        input = strtok(NULL, " ");
        key--;
    }

    return (string)input;
}

int main()
{

    int n;
    cin >> n;
    cin.get();

    string s[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }

    int key;
    string reversal, ordering;
}