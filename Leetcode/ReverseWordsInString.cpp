// LeetCode 186. Contest ( Medium )

/* 186. Reverse Words in a String II
Medium 771 125 Add to List Share
Given a character array s, reverse the order of the words.
word is defined as a sequence of non-space characters. The words in s will be
separated by a single space.
Your code must solve the problem in-place, i.e. without allocating extra space.
Example 1:
 Input: s = "" 'S"
 11 "1 11
 I
 ","b","l","u","e"]
 Output: ["b","l","u" "s","k","y"," ","t","h","e
 Example 2:
 Input: s = ["a"]
 Output: ["a"]
 Constraints:
 1 <=s.length <= 105
 s[i] is an English letter (uppercase or lowercase), digit, or space
 . There is at least one word in s.
 ● s does not contain leading or trailing spaces.
 All the words in are quaranteed to be conarated by a single enaco  */

#include <iostream>
#include <string>
using namespace std;

string ReverseString(string &s, int st, int e)
{
    if (s.length() == 1)
    {
        return s;
    }

    int i = st;
    int j = e;

    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

    return s;
}

int getEndIndex(string &s, int startIndex)
{
    int i = startIndex;
    while (s[i] != ' ')
    {
        i++;
        if (i == s.length() - 1)
        {
            return i;
        }
    }
    return i - 1;
}

void ReverseWordsinString(string &s, int beginIndex)
{
    int i = beginIndex;

    while (i < s.length())
    {
        int j = getEndIndex(s, i);
        ReverseString(s, i, j);
        i = j + 2; // point to the first letter of second word
    }
}

int main()
{
    string s = "abbc cdda";
    string s = "a";
    string s = "my name is anthony gonzalvis";

    ReverseString(s, 0, s.length() - 1);
    // Reverse each word
    ReverseWordsinString(s, 0);
    cout << s << endl;
}
