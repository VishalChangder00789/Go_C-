/*
    Why Macros are good ?

    Macros act like methods only but they can be small like value or like method.
    Macros get copied in place of the call,
    It doesn't take any call stack space or any variable space
    simply gets copied


*/
#include <iostream>
using namespace std;

#define PI 3.14

int main()
{
    int radius;
    cin >> radius;
    int area = PI * radius * radius;
    cout << area << endl;
}