#include <iostream>
using namespace std;

void update(int **p)
{
    p = p + 1;
}

int main()
{

    int num = 10;
    int *ptr = &num;
    int **ptr2 = &ptr;

    cout << "==========================" << endl;

    cout << num << " : Value of num" << endl;
    cout << ptr << " : Value of ptr" << endl; // same
    cout << ptr2 << " : Value of ptr2" << endl;
    cout << *ptr2 << " : Value of address stored in ptr2" << endl; // same

    cout << "==========================" << endl;

    cout << *ptr << " : Value of address stored in ptr" << endl;
    cout << **ptr2 << " : Value of value of address stored in ptr2" << endl;
}