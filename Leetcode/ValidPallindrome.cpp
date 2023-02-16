// Love Babbar Code :

// class Solution
// {
// private:
//     bool isValid(char ch)
//     {
//         if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
//         {
//             return true;
//         }

//         return false;
//     }

//     char toLowerCase(char ch)
//     {
//         if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
//             return ch;
//         else
//         {
//             char temp = ch - 'A' + 'a';
//             return temp;
//         }
//     }

//     bool checkPalindrome(string a)
//     {
//         int s = 0;
//         int e = a.length() - 1;

//         while (s <= e)
//         {
//             if (a[s] != a[e])
//             {
//                 return 0;
//             }
//             else
//             {
//                 s++;
//                 e--;
//             }
//         }
//         return 1;
//     }

// public:
//     bool isPalindrome(string s)
//     {
//         // faltu character hatado
//         string temp = "";

//         for (int j = 0; j < s.length(); j++)
//         {
//             if (isValid(s[j]))
//             {
//                 temp.push_back(s[j]);
//             }
//         }

//         // lowercase me kardo
//         for (int j = 0; j < temp.length(); j++)
//         {
//             temp[j] = toLowerCase(temp[j]);
//         }

//         // check palindrome
//         return checkPalindrome(temp);
//     }
// };

#include <iostream>
#include <string>
using namespace std;

bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }

    return false;
}

bool isValidPallindrome(string s)
{

    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {

        if (!isValid(s[i]))
        {
            i++;
        }
        else if (!isValid(s[j]))
        {
            j--;
        }
        else if ((isValid(s[i]) && isValid(s[j])) && (tolower(s[i]) == tolower(s[j])))
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
    string s = "ab;ba:,A:b,;B,a";
    bool res = isValidPallindrome(s);
    if (res == 1)
    {
        cout << "Pallindrome" << endl;
    }
    else
    {
        cout << "Not Pallindrome" << endl;
    }
}