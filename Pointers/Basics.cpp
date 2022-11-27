#include <iostream>
#include <cstring>
#include <string>

using namespace std;

char *mystrtok(char *s, char delim)
{
    static char *input = NULL;

    if (s != NULL)
    {
        input = s;
    }

    if (input == NULL)
    {
        return NULL;
    }

    char *output = new char[strlen(input) + 1];
    int i = 0;

    for (; input[i] != '\0'; i++) // This is for the input string
    {
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
    char s[100] = "a*n appl*e %n day i{ a bas(ket";

    char *ptr = mystrtok(s, ' ');
    cout << ptr << endl;
    if (ptr[0] < 'a' || ptr[0] < 'A' || ptr[0] > 'z' || ptr[0] > 'Z')
    {
        cout << "Yes" << endl;
    }

    while (ptr != NULL)
    {
        ptr = mystrtok(NULL, ' ');
        cout << ptr << endl;
    }

    return 0;
}