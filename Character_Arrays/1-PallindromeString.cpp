#include <iostream>
#include <cstring>
using namespace std;

bool isPallindrome(char a[], int n)
{

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }

    return true;
}
int main()
{
    char a[1000];
    cin.getline(a, 1000);
    int n = strlen(a); // n actually pointing to the null character
    bool res = isPallindrome(a, n);
    if (res == true)
    {
        cout << "Pallidrome exist" << endl;
    }
    else
    {
        cout << "No Pallindrome exists" << endl;
    }
}