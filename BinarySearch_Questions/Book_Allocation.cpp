/**
 * @file Book_Allocation.cpp
 * @author changdervishal1999@gmail.com
 * @brief
 *
 *  An array of books are provided eg. 10,20,30,40
 * There are m students given.
 *
 * Our task is to divide the books to the m students in such a way that :
 *  1. Each student must get a book
 *  2. The maximum number of pages allocated to each students must be minimum.
 *
 *
 * @version 0.1
 * @date 2023-02-02
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <vector>

using namespace std;

bool isPossibleSolution(vector<int> &books, int m, int mid)
{
    int sum = 0;
    int studentCount = 1;

    for (int i = 0; i < books.size(); i++)
    {
        if (sum + books[i] <= mid)
        {
            sum += books[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || books[i] > mid)
            {
                return false;
            }
            sum = books[i];
        }
    }

    return true;
}

int BookAllocationAlgorithm(vector<int> &books, int m)
{
    // Sum of total books
    int e = 0;

    for (int i = 0; i < books.size(); i++)
    {
        e += books[i];
    }
    int ans = -1;
    // Search space
    int s = 0;

    // Looping through
    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;

        bool res = isPossibleSolution(books, m, mid);
        if (res == true)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> books{10, 20, 30, 40};
    int m = 2;
    int res = BookAllocationAlgorithm(books, m);
    cout << res << endl;
}