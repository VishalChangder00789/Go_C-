#include <iostream>
using namespace std;

/*
    Given a Matrix,

    To be provided.
    N= rows
    M= cols
    k= least strength needed to pass a row
    s= total strength.


    0. Provide values of M,N,K.S.
    1. Take input of character array.  char arr[10][10].
    2. Fill with the sample input.
    3. Run the Function.

    Condition :
    Our players name is Piyush
    Piyush needs to escape from a matrix with atleast k strength

    How strength reduces?
    Every step he takes forward from left to right ==> s-1
    Every time he encounters a .  =>s-2;
    Every time he encounters a * =>s+5;
    Every time he encounters a # (blockade)=> switch to next line.

    He does not looses any strength while changing the row or if he encounters # which results
    in changing the row.

    For each row he needs to have atleast k strength before switching to the next line.


    return No for any false case
    return Yes if he comes out.


    Sample Input
    4 4 5 20  M,N,K,S respectively.

    !Input for character array
    . . * .
    . # . .
    * * . .
    . # * *

*/

string PiyushMagicalPark(char arr[][10], int m, int n, int s, int k)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char a = arr[i][j];

            if (s < k)
            {
                return "No";
            }

            if (a == '.')
            {
                s -= 2;
            }
            else if (a == '*')
            {
                s += 5;
            }
            else
            {
                break;
            }

            if (j != (n - 1))
            {
                s--;
            }
        }
    }

    return "Yes";
}

int main()
{
    char arr[10][10];
    int m, n, k, s;

    cin >> m >> n >> k >> s;

    // Filling char array
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[m][n];
        }
    }

    string res = PiyushMagicalPark(arr, m, n, s, k);
    cout << "Result : " << res << endl;
}