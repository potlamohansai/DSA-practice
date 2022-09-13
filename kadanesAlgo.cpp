// Kadane's Algorithm

#include <iostream>
using namespace std;

int kadanesAlgo(int arr[], int n)
{

    int currentSum = 0;
    int maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}

int main()
{

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);

    cout << kadanesAlgo(arr, size) << endl;
}
