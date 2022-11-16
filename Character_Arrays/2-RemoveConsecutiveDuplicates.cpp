#include <iostream>
#include <cstring>

using namespace std;

// using while loop
void removeConsecutiveDuplicatesWhile(char a[])
{
    int l = strlen(a);
    int i = 0;
    int j = 1;

    if (l == 0 || l == 1)
    {
        return;
    }

    while (j < l)
    {
        if (a[i] != a[j])
        {
            i++;
            a[i] = a[j];
        }
        j++;
    }

    a[i + 1] = '\0';
    return;
}

// using for loop
void removeConsecutiveDuplicates(char a[])
{
    int i = 0;
    int l = strlen(a);
    if (l == 0 || l == 1)
    {
        return;
    }

    for (int j = 1; j < l; j++)
    {
        if (a[i] != a[j])
        {
            i++;
            a[i] = a[j];
        }
    }

    a[i + 1] = '\0';
    return;
}

int main()
{
    // dont calculate the stirng length before hand
    char a[1000];
    cin.getline(a, 1000);

    removeConsecutiveDuplicatesWhile(a);
    cout << a;
}