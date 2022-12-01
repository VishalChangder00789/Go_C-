#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int books[], int no_books, int no_students, int currentMin)
{

    int student_Selected = 1;
    int pages_Assigned = 0;

    for (int i = 0; i < no_books; i++)
    {
        if (books[i] + pages_Assigned > currentMin)
        {
            student_Selected++;
            pages_Assigned = books[i];
            if (student_Selected > no_students)
            {
                return false;
            }
        }
        else
        {
            pages_Assigned += books[i];
        }
    }
    return true;
}

int BookAllocation(int books[], int no_books, int no_students)
{
    // base case
    if (no_books < no_students)
    {
        return -1;
    }

    int sumOfAllPages = 0;
    for (int i = 0; i < no_books; i++)
    {
        sumOfAllPages += books[i];
    }

    // This is my search spaces
    int s = books[no_books - 1];
    int e = sumOfAllPages;
    int ans = INT16_MAX;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (isPossible(books, no_books, no_students, mid))
        {
            ans = min(ans, mid);
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
}

int main()
{
    // Assuming single test case
    int books_Pages[1000];
    int numberOfBooks = 0;
    int numberOfStudents = 0;

    cout << "Enter Values" << endl;
    cin >> numberOfBooks >> numberOfStudents;

    // Fill the array
    for (int i = 0; i < numberOfBooks; i++)
    {
        // Fill pages for a single book represented by single cell
        cin >> books_Pages[i];
    }

    // Run the algorithm
    cout << BookAllocation(books_Pages, numberOfBooks, numberOfStudents) << endl;
}