// Playing with reference variables
/**
 * @brief
 *
 * Reference variables are the variables which are pointing to the same address as the counterpart
 * It is used to change the actual value, Pointers can also be used to do the same thing
 * The advantage of using the reference variables are that of pointers
 *
 * Internally the reference variables implemented like the pointers only,
 * The compiler explicitly puts a * where it is needed and rest works like a pointer variable only
 *
 * Rules :
 * 1. Reference variables must be initialised from the begining only.
 *      int i=10;
 *      int&j;
 *      j=i;    // This is a wrong appraoch
 *
 *      int i=10;
 *      int &j = i;   // This is the correct approach.
 *
 * 2. Reference variables are constant in nature. i.e once they're are assigned to something,
 *      reassinging them will throw an error (usually).
 *
 * 3. A pointer varible will be having its own memory address, but the reference variable shares the
 *    address of the variable it is told to follow
 *
 * 4. A reference variable cannot be assigned NULL.
 *
 * 5. You cannot use pointer arithmatics on reference variables.
 *
 *
 *
 */
#include <iostream>
using namespace std;

void update(int param)
{
    param += 1;
}

void update1(int &param)
{
    param += 1;
}

int main()
{
    int a = 100;
    int &b = a; // pointing to the same address
    int z = 100;
    b = z; // throw error

    cout << "Normal Variable ; " << &a << endl;
    cout << "Reference variable : " << &b << endl;

    // cout << "===========================" << endl;

    // int i = 10;
    // int j = i; // copy

    // cout << "Normal variable : " << &i << endl;
    // cout << "Normal variable : " << &j << endl;

    // cout << "===========================" << endl;

    /* Reference variable with functions */

    int a = 10;
    update(a); // This will not update the value of a
    cout << "Value of a After normal update : " << a << endl;
    update1(a); // This will update the value of a.
    cout << "Value of a After reference variable update : " << a << endl;
}