#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "========================= SEPERATION ========================= " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================= STRING DECLARATION AND BASICS ========================= " << endl;
    string s = "i am a hero";              // declare a string
    s[3] = 'p';                            // strings are mutable in c++
    cout << "String s is : " << s << endl; // output a string  // output : i ap a hero

    string s2;
    cin >> s2;                               // non space containing strings can be input like this
    cout << "String s2 is : " << s2 << endl; // space not accepting. Strings are also bad in space management like char arrays

    // strings can be equalised as well as assigned to another string
    string s3 = "creation of my mind";
    string s4 = s3;
    cout << "String s3 is : " << s3 << endl
         << "String s4 is : " << s4 << endl;

    // Copy Constructor
    string s9(s3);
    s9[s9.length() + 1] = 'N'; // doesn;t create any difference
    cout << "s9 string value : " << s9 << endl;

    // strings can be reassigned
    s3 = "i am invincible";
    cout << "String s3 is : " << s3 << endl;

    cout << "========================= SEPERATION ========================= " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================= STRING Lengths ========================= " << endl;
    // Length of the string
    cout << "Length of the string : (" << s << ")  is : " << s.length() << endl;
    cout << "Length of the string : (" << s2 << ")  is : " << s2.length() << endl;
    cout << "Length of the string : (" << s3 << ")  is : " << s3.length() << endl;
    cout << "Length of the string : (" << s4 << ")  is : " << s4.length() << endl;

    cout << "========================= SEPERATION ========================= " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================= CHARACTER ARRAYS AND STRINGS RELATION ========================= " << endl;
    // Relation between Character array and strings
    char a[] = {'h', 'e', 'l', 'l', 'o'};
    char b[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    string s5 = a; // shows garbage values
    string s6 = b; // works correctly
    cout << s5 << endl;
    cout << s6 << endl;

    cout << "========================= SEPERATION ========================= " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================= STRING METHODS ========================= " << endl;

    // Check string empty
    string sEmpty = "";
    if (sEmpty.empty())
    {
        cout << "Empty string" << endl;
    }
    else
    {
        cout << "No empty string" << endl;
    }

    // Append a string
    string s7 = "hello";
    string s8 = "world";
    cout << s7.append(s8) << endl;

    // clear a string

    cout << " S8 string is  : " << s8 << endl;
    cout << "Length of S8 before clearing : " << s8.length() << endl;
    s8.clear();
    cout << "Length of S8 after clearing : " << s8.length() << endl;
    cout << " S8 string is  : " << s8 << endl;

    // Compare two strings
    // Lexiographical comparision : which word occurs first in dictionary
    string s10 = "APPLE";
    string s11 = "MANGO";

    cout << s10.compare(s11) << endl; // Output : -1  APPLE comes first

    // Find Substring
    string s12 = "I want apple juice";
    int index = s12.find("apple");
    cout << "Index of word : apple : " << index << endl;
    string s14("apple");
    int len = s14.length();

    // Remove a substring
    string s13 = s12.erase(index, len + 1);
    cout << "Modified string is : " << s13 << endl;

    cout << "========================= SEPERATION ========================= " << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "========================= STRING ITERATION ========================= " << endl;

    string s_new = "STRING_TO_BE_ITERATED";

    // USING for loop
    for (int i = 0; i < s_new.length(); i++)
    {
        cout << s_new[i];
    }
    cout << endl;

    // Using iterators
    for (auto it = s_new.begin(); it != s_new.end(); it++)
    {
        cout << *it;
    }
    cout << endl;

    // Using for each loop
    for (char c : s_new)
    {
        cout << c;
    }
}