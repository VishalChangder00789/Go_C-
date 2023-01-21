/**
 * @file BalanceParanthesis.cpp
 * @author Bishal Changder : changdervishal1999@gmail.com
 * @brief  Balanced Paranthesis :  if all the paranthesis are cancelling then the string is balanced
 * @version 0.1
 * @date 2023-01-21
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <map>
using namespace std;

bool isPair(string x)
{
    // Your code here

    if (x.length() == 1)
    {
        return false;
    }

    map<char, int> mp;
    for (int i = 0; i < x.length(); i++)
    {
        mp[x[i]] = 0;
    }

    for (int i = 0; i < x.length(); i++)
    {
        mp[x[i]]++;
    }

    auto it = mp.begin();
    int ans = 0;
    for (; it != mp.end(); it++)
    {
        cout << it->first << " :  " << it->second << endl;
        ans = ans ^ it->second;
    }

    cout << "ans : " << ans << endl;
    if (ans > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string s = "((}";
    bool result = isPair(s);
    cout << "Result is : " << result << endl;
}