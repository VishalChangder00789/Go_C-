#include <iostream>
using namespace std;
int kadanesAlgorithm(int a[], int n)
{
    int currentSum = 0;
    int maximumSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum = currentSum + a[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        if (currentSum > maximumSum)
        {
            maximumSum = currentSum;
        }
        }
    return maximumSum;
}
int main()
{
    int a[] = {-4, 1, 3, -2, 6, 2, -1, -4, -7};
    int n = sizeof(a) / sizeof(a[0]);
    int maxSum = kadanesAlgorithm(a, n);
    cout << "Maximum Sum is : " << maxSum << endl;
}