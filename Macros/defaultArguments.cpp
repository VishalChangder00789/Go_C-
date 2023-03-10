#include <iostream>
using namespace std;

// void printArr(int arr[], int n=0, int start)  //wrong, extreme right should be given first.
void printArr(int arr[], int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 4, 5, 9, 98};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, n); // working without polymorphism
    printArr(arr, n, 3);

    // what is i want to give the start as optional :
    // If the paramter is passed then the loop should start from that value or else it should start
    // from the default value.

    // Default value assignent should always start from left to right , i.e if there are 3 parameters
    // i cannot assign the middle param to have a default value not until the extreme right value is
    // set to its default value.
}