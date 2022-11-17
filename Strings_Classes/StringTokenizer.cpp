#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
// Use of strtok inbuilt in cstring library
// Multiple calls are neccesary
int main()
{
    char s[100] = "Today is a rainy day";
    char *ptr = strtok(s, " ");
    cout << ptr << endl;
    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }
}