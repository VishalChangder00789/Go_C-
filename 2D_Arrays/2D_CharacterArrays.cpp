#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[][10] = {{'a', 'b', 'c', '\0'}, {'d', 'e', 'f', '\0'}};
    cout << a[0] << endl;
    cout << a[1] << endl;
    char b[][10] = {"abc", "def", "ghi"};
    cout << b[0] << endl;
    cout << b[1] << endl;
    char c[10][1000];

    int n;
    cin >> n;
    cin.get();
    // Input
    for (int i = 0; i < n; i++)
    {
        cin.getline(c[i], 1000);
    }

    cout << "==========================>" << endl;
    // Output
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << endl;
    }
}