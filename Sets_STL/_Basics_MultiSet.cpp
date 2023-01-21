/**
 * @file _Basics_MultiSet.cpp
 * @author Bishal Changder || changdervishal1999@gmail.com
 * @brief  Multiset is a set that can contain multiple similar values.
 *  ! Searching , Insertion and Removal works in O(log(n)) complexity
 *  TODO:: Implementation using Red-Black tree or AVL Tree or self balancing tree.
 *  ?? Sorting order can be passed while declaring a multiset.
 *
 *  //* Perform the insertion , deletion , search in multiset
 * ! Index access cannot be performed (Immutable)
 * @version 0.1
 * @date 2023-01-21
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <set>
#include <vector>

using namespace std;

void displaymulset(multiset<int> &mul)
{

    auto it = mul.begin();
    for (; it != mul.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "Display done" << endl;
    cout << endl;
}
void Insert(multiset<int> &mul, vector<int> &v)
{
    auto it = v.begin();
    for (; it != v.end(); it++)
    {
        mul.insert(*it);
    }

    cout << "Insertion done" << endl;
}
void search(multiset<int> &mul, int key)
{
    if (mul.find(key) != mul.end())
    {
        cout << "Found : " << endl;
        return;
    }

    cout << "Not Found" << endl;
    return;
}

void erase_deletion(multiset<int> &mul, int el)
{
    mul.erase(el);
    cout << "Erasing done " << endl;
}

int main()
{
    // multiset<int, greater<int>> mulSet; // Descending
    // multiset<int, less<int>> mul_Set;   // Ascending

    multiset<int> mul;
    vector<int> v = {5, 4, 2, 3, 4, 5, 1, 5, 9, 9, 8, 7, 12, 15, 6, 16, 15, 14, 12, 11, 10, 10, 11, 12};

    Insert(mul, v);
    displaymulset(mul);

    search(mul, 12);
    erase_deletion(mul, 15);
    displaymulset(mul);
    cout << "Number of a particular element recurring in the multiset " << mul.count(9) << endl;
    mul.clear(); // Clear complete multiset
    if (mul.empty())
    {
        cout << "Empty Multiset" << endl;
    }
    else
    {
        cout << "Non Empty Multiset" << endl;
    }
    displaymulset(mul);
}