/*
    Implementation of the jagged arrays and 2D arrays with convinience.

*/

#include <iostream>
using namespace std;

#pragma region-- -- --2D ARRAY-- -- -- -- -
int **createArray(int n, int m)
{
    // creates array of size m and n
    int **ptr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        ptr[i] = new int[m];
    }
    cout << "Creation Done" << endl;
    return ptr; // sends the reference of the double pointer
}

void insertElement(int **ptr, int r, int c, int Initialval)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ptr[i][j] = Initialval;
            Initialval++;
        }
    }

    cout << "Insertion done" << endl;
}

void printArray(int **ptr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing done " << endl;
}
#pragma endregion

#pragma region-- - Jagged Array
pair<int **, int *> createJaggedArray(int r)
{
    // a dynamic array to store the number of cols in each row of the jagged array
    int *arr = new int[r];

    /*Prompt user how many cols they want in each row*/
    for (int i = 0; i < r; i++)
    {
        int n = 0;
        cout << "Enter the number of cols you want for row -> " << (i + 1) << endl;
        cin >> n;
        arr[i] = n;
    }

    /* Create a jagged array*/
    int **jagPtr = new int *[r];

    for (int i = 0; i < r; i++)
    {
        jagPtr[i] = new int[arr[i]];
    }

    cout << "Jagging done " << endl;

    return {jagPtr, arr};
}

void insertElementinJagged(pair<int **, int *> p, int r, int initialValue)
{

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < p.second[i]; j++)
        {
            p.first[i][j] = initialValue;
            initialValue++;
        }
    }

    cout << "Insertion in jagged is done : " << endl;
}

void printJagged(pair<int **, int *> p, int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < p.second[i]; j++)
        {
            cout << p.first[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing done : " << endl;
}

#pragma endregion-- - Jagged Array

int **create2dDynamic(int m, int n)
{
    int **ptr = createArray(m, n);
    insertElement(ptr, m, n, 45);
    printArray(ptr, m, n);

    return ptr;
}

int **createJagged2DArray(int r)
{
    pair<int **, int *> p = createJaggedArray(r);
    insertElementinJagged(p, r, 78);
    printJagged(p, r);

    return p.first;
}

int main()
{
    cout << endl;
    cout << endl;
    int **ptr1 = create2dDynamic(7, 7);
    cout << "============================" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    int **ptr = createJagged2DArray(5);
}