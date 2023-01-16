#include <iostream>
using namespace std;

int *mergeSort(int a1[], int a2[], int n1, int n2)
{

    // creating a new array of size n1 and n2
    int *a3 = new int[n1 + n2];

    int i = 0, j = 0;
    int z = 0;

    while (i < n1 && j < n2)
    {

        // if a1 has a smaller element push it first and increment
        if (a1[i] < a2[j])
        {
            a3[z] = a1[i];
            z++;
            i++;
        }
        else if (a2[j] < a1[i])
        {
            // if a2 has a smaller element push it first and increment
            a3[z] = a2[j];
            j++;
            z++;
        }
    }

    // edge case
    while (i != n1)
    {
        // push the remaining element into the new array
        a3[z] = a1[i];
        z++;
        i++;
    }

    while (j != n2)
    {
        a3[z] = a2[j];
        z++;
        j++;
    }

    return a3;
}

int main()
{

    int arr[] = {1, 3, 5, 8, 9, 11, 14, 18, 25};
    int arr2[] = {
        0,
        4,
        7,
        22,
        24,
    };
    int n1 = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int *k = mergeSort(arr, arr2, n1, n2);

    for (int i = 0; i < (n1 + n2); i++)
    {
        cout << k[i] << endl;
    }
}