/*

1910. Remove All Occurrences of a Substring
Medium
1.1K
45
Companies
Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.

A substring is a contiguous sequence of characters in a string.



Example 1:

Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
Explanation: The following operations are done:
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
- s = "dababc", remove "abc" starting at index 3, so s = "dab".
Now s has no occurrences of "abc".
Example 2:

Input: s = "axxxxyyyyb", part = "xy"
Output: "ab"
Explanation: The following operations are done:
- s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".
- s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".
- s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".
- s = "axyb", remove "xy" starting at index 1 so s = "ab".
Now s has no occurrences of "xy".


Constraints:

1 <= s.length <= 1000
1 <= part.length <= 1000
s​​​​​​ and part consists of lowercase English letters.

*/

#include <iostream>
#include <string>
using namespace std;

// Optmization required.

string removeStringFromIndex(string &s, int firstIndex, int lastIndex)
{

    // Removes the string from first index to last index

    // Complexity O(n)

    if (firstIndex == -1 && lastIndex == -1)
    {
        return s;
    }

    string temp = "";
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i >= firstIndex && i <= lastIndex)
        {
            continue;
        }
        else
        {
            temp.push_back(s[i]);
            j++;
        }
    }

    s = temp;
    return s;
}

pair<int, int> findInString(string &s, string &word)
{
    // Returns the first and lastIndex of the word string inside string s

    int i = 0;
    int j = 0;

    int lastIndex = 0;
    int firstIndex = 0;
    while (i < s.length())
    {

        if (s[i] == word[j])
        {
            if (word.length() == 1)
            {
                return {i, i};
            }
            // check if all the words are same or not
            int count = i;
            int loop = 0;

            while (loop < word.length())
            {
                if (s[count] == word[j])
                {
                    loop++;
                    count++;
                    j++;
                    if (loop == word.length() - 1 && s[count] == word[j])
                    {
                        firstIndex = i;
                        lastIndex = count;
                        return {firstIndex, lastIndex};
                    }
                }
                else
                {
                    j = 0;
                    break;
                }
            }
        }

        i++;
    }

    return {-1, -1};
}

string RemoveAllOccurancesOfSubstring(string &s, string &part)
{
    pair<int, int> p{1, 1};
    string s_new = s;

    while (p.first != -1 && p.second != -1)
    {
        p = findInString(s_new, part);
        cout << p.first << " , " << p.second << endl;
        s_new = removeStringFromIndex(s_new, p.first, p.second);
        cout << s_new << endl;
    }

    return s_new;
}

int main()
{

    string s2 = "gjzgbpggjzgbpgsvpwdk";
    string part2 = "gjzgbpg";

    string s3 = "wwwwwwwwwwwwwwwwwwwwwvwwwwswxwwwwsdwxweeohapwwzwuwajrnogb";
    string part3 = "w";

    string res = RemoveAllOccurancesOfSubstring(s2, part2);
    cout << res << endl;
}
