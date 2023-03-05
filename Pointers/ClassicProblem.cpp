#include <iostream>
using namespace std;

void update(int *p)
{
    p = p + 1;
    cout << "Inside the method" << p << endl;
}

void update(int **p)
{
    p = p + 1;
    cout << "Inside the method 2 : " << p << endl;
}
int main()
{

    int num = 10;
    int *ptr = &num;

    cout << "Before the method " << ptr << endl;
    update(ptr); // will not change the value as the copy of pointer variable is passed
    cout << "Outside the Method " << ptr << endl;
    update(&ptr); // will change because the address of pointer variable is passed
    cout << "Outside the method " << ptr << endl;
}