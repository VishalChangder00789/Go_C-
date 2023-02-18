/*
https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

1047. Remove All Adjacent Duplicates In String
Easy
5.4K
215
Companies
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.



Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation:
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"


Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.
*/

#include <iostream>
#include <stack>
using namespace std;

string removeAdjacentDuplicates(string &s)
{
    stack<int> st;
    int i = 0;

    while (i < s.length())
    {
        if (st.empty())
        {
            st.push(s[i++]);
        }
        else if (st.top() == s[i])
        {
            st.pop();
            i++;
        }
        else
        {
            st.push(s[i++]);
        }
    }

    // create a string to return
    string temp = "";
    while (!st.empty())
    {
        char a = st.top();
        temp.push_back(a);
        st.pop();
    }

    // reverse the string
    int z = 0;
    int k = temp.size() - 1;
    while (z < k)
    {
        char a = temp[z];
        temp[z] = temp[k];
        temp[k] = a;
        z++;
        k--;
    }

    return temp;
}

int main()
{

    string s = "abbaca";
    cout << removeAdjacentDuplicates(s);
}