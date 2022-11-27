#include <iostream>
using namespace std;

void passByValue(int a)
{
    a++;
    cout << "Method : passByValue =>  Address of this bucket : " << &a << " Value : " << a << endl;
}

void passByReference(int *a)
{
    *a = *a + 1;
    // Since it is a pointer variable to expecting the same address as passed
    cout << "Method : passByValue =>  Address contained by the pointer : " << a << " Value : " << *a << endl;
}

int main()
{

    int a = 10;
    passByValue(a);
    cout << "Main : => Address of this bucket : " << &a << " Value : " << a << endl;

    passByReference(&a);
    cout << "Main : => Address of this bucket : " << &a << " Value : " << a << endl;
}