#include <iostream>
#include <string>
#include <vector>
using namespace std;

int mostWordsFound(vector<string> &sentences)
{

    int max = 0;
    for (int i = 0; i < sentences.size(); i++)
    {
        int count = 1;
        for (int j = 0; j < sentences[i].size(); j++)
        {
            if (sentences[i][j] == ' ')
            {
                count++;
            }
        }

        if (count > max)
        {
            max = count;
        }
        cout << endl;
    }

    return max;
}

int main()
{
    vector<string> v = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanx very much"};

    cout << mostWordsFound(v) << endl;
}