/**
 * @file _Basics_STL.cpp
 * @author Bishal Changder || changdervishal1999@gmail.com
 * @brief
 *         : STL sets : insertion , deletion , searching, deletion
 * @version 0.1
 * @date 2023-01-21
 *  Insertion : O(log(n))
 *  Deletion : O(log(n))
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include <set>
#include <vector>

using namespace std;

void insertSet(vector<int> &arr, set<int> &s)
{

    for (int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
    }

    cout << "Insetion done " << endl;
}
void displaySet(set<int> &s)
{
    auto it = s.begin();
    for (; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "Display done " << endl;
}
void eraseSet(set<int> &s, int el)
{
    s.erase(el);
    cout << "Erasing done " << endl;
}

void findSet(set<int> &s, int el)
{
    if (s.find(el) != s.end())
    {
        cout << "Found : " << endl;
        return;
    }

    cout << "Not found" << endl;
    return;
}

int main()
{
    vector<int> v{1, 2, 1, 2, 5, 6, 8, 9, 8, 9, 4, 5, 6, 3, 7, 8};
    cout << v.size() << endl;
    set<int> s;

    insertSet(v, s);
    displaySet(s);
    eraseSet(s, 9);
    displaySet(s);
    findSet(s, 7);
    s.emplace(18);
    displaySet(s);

    cout << s.count(2);
}