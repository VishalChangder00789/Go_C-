#include <iostream>
#include <cstring>

using namespace std;
// When using the cin.getline(a,1000) it all depends upon the delimeter set
// if the delimeter is set to \n then we have to consume the extra \n that we get after enter the n
// value by using cin.get() : check line no.12 else we wont be able to take n inputs only (n-1) possible
int main()
{
    int n;
    cin >> n;
    cin.get();
    char a[1000];

    int currentString = 0;
    int maxString = 0;

    for (int i = 0; i < n; i++)
    {
        cin.getline(a, 1000);
        currentString = strlen(a);

        if (currentString > maxString)
        {
            maxString = currentString;
        }
        cout << a << endl;
    }
    cout << maxString << endl;
}