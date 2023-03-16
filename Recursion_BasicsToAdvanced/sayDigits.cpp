#include <iostream>
#include <vector>
#include <vector>
using namespace std;

void sayDigit(int n, vector<string> digits)
{
    if (n == 0)
        return;

    int digit = n % 10;
    n = n / 10;
    sayDigit(n, digits);
    cout << digits[digit] << " ";
}

int main()
{
    int n = 245589;
    vector<string> v{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    sayDigit(n, v);
}