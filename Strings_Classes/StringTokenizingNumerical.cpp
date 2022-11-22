#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int convertToInt(string s)
{
    int ans = 0;
    int p = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        ans += ((s[i] - '0') * p);
        p *= 10;
    }

    return ans;
}

bool numeric(pair<string, string> p1, pair<string, string> p2)
{
    string key1 = p1.second;
    string key2 = p2.second;

    return convertToInt(key1) < convertToInt(key2);
}

bool lexiographic(pair<string, string> p1, pair<string, string> p2)
{
    // might cause error
    return p1.second < p2.second;
}

string extractTokenAtKey(string s, int key)
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
    cin >> key;
    string reversal, ordering;
    cin >> reversal;
    cin >> ordering;

    pair<string, string> p[100];

    for (int i = 0; i < n; i++)
    {
        p[i].first = s[i];
        p[i].second = extractTokenAtKey(s[i], key);
    }

    // sorting basis
    if (ordering == "numeric")
    {
        sort(p, p + n, numeric);
    }
    else
    {
        sort(p, p + n, lexiographic);
    }

    if (reversal == "true")
    {
        for (int i = 0; i < n / 2; i++)
        {
            swap(p[i], p[n - i - 1]);
        }
    }

    // print the output
    for (int i = 0; i < n; i++)
    {
        cout << p[i].first << endl;
    }

    return 0;
}