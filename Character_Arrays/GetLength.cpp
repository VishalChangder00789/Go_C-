#include <iostream>
#include <vector>
using namespace std;

int getLength(char ch[])
{

    int len = 0;

    for (int i = 0; ch[i] != '\0'; i++)
        len++;

    return len;
}

int main()
{

    char ch[20];

    cout << "Enter your name : " << endl;
    cin >> ch;

    cout << "Your name is  : " << ch << endl;

    cout << "Length of your name is : " << getLength(ch) << endl;
}