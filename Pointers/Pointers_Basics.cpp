#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    int *ptr = &num;

    int num_address = *ptr; // value of the memory block to which the ptr is pointing to

    cout << num << endl;
    cout << ptr << endl;
    cout << num_address << endl;

    int *t = new int[5];
    t[0] = 1;
    t[1] = 2;
    t[2] = 3;
    int ab = 10;
    cout << t << " ---> " << *t << endl;
    *t = ab;
    cout << t << " ---> " << *t << endl;
    t = t + 1;
    cout << t << " ---> " << *t << endl;
    t = t + 1;
    cout << t << " ---> " << *t << endl;
    t = t + 1;
    cout << t << " ---> " << *t << endl; // output will be garbage

    // Not printing anything : strange

    int *c = 0;
    int a = 10;
    *c = a;
    cout << *c << endl;

    // Play with characters

    char ch = 'a';
    char *ptr1 = &ch;
    ch++;
    cout << *ptr << endl;

    // int a[] = {1, 2, 3, 4};
    // cout << a << endl;
    // int *p = a++;
}