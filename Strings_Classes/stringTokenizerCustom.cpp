#include <iostream>
#include <cstring>
using namespace std;

char *mystrtok(char s[], char delim)
{
    // static variable for call check
    static char *input = NULL;

    // if string is not empty then assign.
    if (s != NULL)
    {
        input = s;
    }

    if (input == NULL)
        return NULL;

    cout << "Length : " << strlen(input) << endl;
    char *output = new char[strlen(input) + 1];
    int i = 0;
    cout << "Value of i : " << i << endl;
    for (; input[i] != '\0'; i++)
    {
        cout << "Input @ i : " << input[i] << endl;
        if (input[i] != delim)
        {
            output[i] = input[i];
        }
        else
        {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }

    output[i] = '\0';
    input = NULL;
    return output;
}

int main()
{
    char s[100] = "This a rainy day is"; // no null character added.
    cout << sizeof(s) << endl;
    cout << strlen(s) << endl;

    char *ptr = mystrtok(s, ' ');
    cout << ptr << endl;

    while (ptr != NULL)
    {
        ptr = mystrtok(NULL, ' ');
        cout << ptr << endl;
    }

    return 0;
}