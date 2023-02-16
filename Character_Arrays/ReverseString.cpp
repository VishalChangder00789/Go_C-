#include <iostream>
using namespace std;

int getLength(char ch[])
{

    int len = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        len++;
    }

    return len;
}

void ReverseString(char ch[])
{

    int i = 0;
    int j = getLength(ch) - 1;

    while (i < j)
    {
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
        i++;
        j--;
    }
}

int main()
{

    char ch[20];
    cout << "Enter string" << endl;
    cin >> ch;

    cout << "You original string is  : " << ch << endl;

    ReverseString(ch);

    cout << "Your reversed string is : " << ch << endl;
}