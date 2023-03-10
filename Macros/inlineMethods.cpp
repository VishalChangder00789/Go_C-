#include <iostream>
using namespace std;

/*
    ! What are Inline Methods ?
    * Inline methods are the methods which works like macros but made for methods
    * They get copied in place of method call so the function call stack is reduced and
    * the program becomes more effective.
    * The less method calls , the better the method will work.
    *
    TODO :: There are 3 types of inline methods call
    !1 .. * If the method contains 1 line : Compiler will make the method inline
    !2 .. * If the method contains more than 1 and <=3 : the compiler will decide wheather to make
    !3 .. * If the method contains more than 3 lines the compiler will reject the inline and might
    !       throw an error.
*/

inline int getMax(int a, int b)
{
    int z = a;
    int x = b;
    return z > x ? z : x;
}

int main()
{
    int a = 4;
    int b = 5;
    int res = 0;

    // res = (a > b) ? a : b;

    res = getMax(a, b);
    cout << res << endl;
}