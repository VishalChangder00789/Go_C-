#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(string s, string output, int index, vector<string> &ans)
{
    if (index >= s.length())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(s, output, index + 1, ans);

    char el = s[index];
    // // cout << el << endl;
    output.push_back(el);
    solve(s, output, index + 1, ans);
}

vector<string> subsequence(string &s)
{
    string output;
    vector<string> ans;
    int index = 0;

    solve(s, output, index, ans);
    return ans;
}

int main()
{
    string s = "abc";
    vector<string> res = subsequence(s);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
        cout << endl;
    }
}