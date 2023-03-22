#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, vector<string> mapping)
{

    // base case
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int digit = digits[index] - '0';
    string mappedValue = mapping[digit];

    for (int i = 0; i < mappedValue.length(); i++)
    {
        // include in the output string
        output.push_back(mappedValue[i]);
        // Solve for the remaining recursive cases
        solve(digits, output, index + 1, ans, mapping);
        // take out the previous character
        output.pop_back();
    }
}

vector<string> letterCombinations(string &digits)
{

    vector<string> ans;
    if (digits.length() == 0)
    {
        return ans;
    }
    string output = "";
    int index = 0;

    vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(digits, output, index, ans, mapping);
    return ans;
}

int main()
{
    // string s = "";
    // string s = "89";
    string s = "79";
    vector<string> res = letterCombinations(s);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
        cout << endl;
    }
}