/**
 * @file Unique_Number_of_Occurrences.cpp
 * @author your name (you@domain.com)
 * @brief reference : https://leetcode.com/problems/unique-number-of-occurrences/
 *
 * !Accepted.
 *
 * @version 0.1
 * @date 2023-01-21
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <map>
#include <vector>
#include <set>

using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{

    // creating a map
    map<int, int> mp;
    set<int> s;

    for (int i = 0; i < arr.size(); i++)
    {
        // initialize
        mp[arr[i]] = 0;
    }

    // incrementing the count
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    auto it = mp.begin();
    for (; it != mp.end(); it++)
    {
        s.insert(it->second);
    }

    if (mp.size() < s.size() || mp.size() > s.size())
    {
        return false;
    }

    return true;
}
int main()
{
    vector<int> v{1, 2, 2, 1, 3, 3};
    bool result = uniqueOccurrences(v);
    cout << result << endl;
}