#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Do Reiteration.
// using character arrays

char maxOccuringCharacterInString(string &s)
{
    int characterCount[26] = {0};

    // Store the count of all the characters inside the array
    for (int i = 0; i < s.length(); i++)
    {
        characterCount[s[i] - 'a']++;
    }

    int max = -1;
    int ans = -1;

    for (int i = 0; i < 26; i++)
    {
        if (max < characterCount[i])
        {
            max = characterCount[i];
            ans = i;
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    // string s = "output";
    string s = "testsample";
    cout << maxOccuringCharacterInString(s);
}