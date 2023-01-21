/**
 * @file _Basics.cpp
 * @author your name (you@domain.com)
 * @brief  :
 *          Ordered Maps are also called maps.
 * They store the items in a increasing fashion.
 * Implemented in Red black tree.
 * Search time : log(n)
 * Deletion time : log(n) + self balancing
 * Insertion time : log(n) + self balancing.
 * @version 0.1
 * @date 2023-01-21
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <map>

// Map is done.
using namespace std;

void fillMaps(map<int, int> &mp, int arr[], int n)
{

    // iterating the array in such a way that
    // the element of the array will be acting as the key and the
    // number of occurance of the element will be acting the as the value.

    // iteration.
    //  initializing the map with all the zero values.
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]] = 0;
    }
}

void displayMap(map<int, int> &mp)
{
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }
}

void createArrayIndexMap(int arr[], int n, map<int, int> &mp)
{

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
}

void insertPair(map<int, int> &mp)
{
    // in built method in the STL map groups
    mp.insert({78, 2});
}

void search(map<int, int> &mp, int key)
{
    if (mp.find(key) != mp.end())
    {
        cout << "Found  : " << mp[key] << endl;
    }
}

void erase(map<int, int> &mp, int key)
{
    mp.erase(key);
    cout << "Erased ... " << endl;
    displayMap(mp);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 4, 5, 6, 1, 2, 3, 56, 5, 4, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    map<int, int> mp;

    fillMaps(mp, arr, n);
    createArrayIndexMap(arr, n, mp);
    displayMap(mp);

    cout << "Searching : "
         << "6 ->";
    search(mp, 6);
    cout << endl;

    cout << "-------------------------" << endl;
    erase(mp, 6);
}
