#include <iostream>
using namespace std;

int main()
{

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number : " << endl;
        cin >> arr[i];
    }

    // displaying array
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}