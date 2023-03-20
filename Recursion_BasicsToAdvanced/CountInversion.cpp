#include <iostream>
using namespace std;

int countInversions_Brute(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }

    return count;
}
int calculateInversion(int arr[], int s, int m, int e)
{

    int *temp = new int[e - s + 1];
    int i = s; // first index of left
    int j = m; // first index of right
    int x = 0; // empty array index
    int cnt_inv = 0;

    while (i <= m - 1 && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp[x] = arr[i];
            i++;
            x++;
        }
        else
        {
            temp[x] = arr[j];
            cnt_inv += m - i;
            x++;
            j++;
        }
    }

    while (i <= m - 1)
    {
        temp[x] = arr[i];
        x++;
        i++;
    }

    while (j <= e)
    {
        temp[x] = arr[j];
        x++;
        j++;
    }

    // copy rest of the elements

    /// This area is the biggest problem creator.
    //! This piece of code should be wriitten carefully

    int z = s;
    for (int i = 0; i < x; i++)
    {
        arr[z] = temp[i];
        cout << arr[z] << " ";
        z++;
    }
    cout << endl;
    return cnt_inv;
}

int countInversion_usingMerge(int arr[], int s, int e)
{

    int cnt_inv = 0;
    if (s >= e)
    {
        return cnt_inv;
    }
    int m = s + (e - s) / 2;
    cnt_inv += countInversion_usingMerge(arr, s, m);
    cnt_inv += countInversion_usingMerge(arr, (m + 1), e);
    cnt_inv += calculateInversion(arr, s, (m + 1), e);

    return cnt_inv;
}

int main()
{

    // int arr[] = {8, 4, 2, 1};
    int arr[] = {1, 20, 6, 4, 5};
    int arr2[] = {1, 20, 6, 4, 5}; // created for brute force
    int n = sizeof(arr) / sizeof(arr[0]);
    int n_z = n - 1;

    cout << endl;
    cout << "Number of Inversions using merge sort is : " << countInversion_usingMerge(arr, 0, n_z) << endl;
    cout << "Number of Inversions using Brute Force is : " << countInversions_Brute(arr2, n) << endl;
}
