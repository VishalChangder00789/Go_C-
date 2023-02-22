// TASK : create a utils header to use the take input and print matrix
// functionalities to minimize the rewriting of the code

#include <iostream>
#include "Utils.h"

using namespace std;

int main()
{
    int a[10][10];
    int m = 5;

    // using from other header file
    _takeInputs(a, m, m);

    // using from other header file

    _printMatrix(a, m);
}