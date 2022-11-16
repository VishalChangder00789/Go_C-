#include <iostream>
using namespace std;

int main()
{
    char a[10] = {'a', 'b', 'c'};
    a[10] = '\0'; // It is very important to put a terminating character and make sure it is terminated.

    cout << a << endl; // operator overaloding for << "left shift operator"  : Output content of the character array

    char ah[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    char s2[] = "hello";

    cout << ah << endl;               // prints abcde
    cout << s1 << sizeof(s1) << endl; // prints helloabcde.
    cout << s2 << sizeof(s2) << endl; // prints hello
    cout << "================================================" << endl;
    // Types of initialization
    char a1[10];                                             // reserved for 10 character
    char a2[10] = {'a', 'b', 'c', '\0', 'e', 'f', 'g', 'h'}; // Initialised with some characters
    char a3[] = "hello";                                     // As a string : Null character added automatically
    char a4[10] = "hello";                                   // has 5 initial characters as hello and then remaining 5 are empty

    cout << a1 << sizeof(a1) << endl;
    cout << a2 << sizeof(a2) << endl;
    cout << a3 << sizeof(a3) << endl;
    cout << a4 << sizeof(a4) << endl;
}