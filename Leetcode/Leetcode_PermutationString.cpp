/*
    Medium :

    567. Permutation in String
Medium
9.3K
292
Companies
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.



Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false


Constraints:

1 <= s1.length, s2.length <= 104
s1 and s2 consist of lowercase English letters.
*/

#include <iostream>
#include <string>
using namespace std;

bool isEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            return 0;
    }

    return 1;
}

bool checkInclusion(string s1, string s2)
{
    // create the array of character counts
    int count1[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        count1[s1[i] - 'a']++;
    }

    // create the first window
    int i = 0;
    int count2[26] = {0};
    int windowSize = s1.length();
    while (i < windowSize && i < s2.length())
    {
        count2[s2[i] - 'a']++;
        i++;
    }

    if (isEqual(count1, count2))
        return 1;

    while (i < s2.length())
    {
        // remove the old character
        count2[s2[i - windowSize] - 'a']--;

        // add the new character
        count2[s2[i] - 'a']++;

        // check if euqal now
        if (isEqual(count1, count2))
            return 1;

        i++;
    }

    return 0;
}

int main()
{

    string s1 = "za";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2))
    {
        cout << "Included" << endl;
    }
    else
    {
        cout << "Not included" << endl;
    }
}