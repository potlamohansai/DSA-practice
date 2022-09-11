
// Binary search

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

// driver Code
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    int size = sizeof(arr) / sizeof(int);

    int key = 90;

    cout << binarySearch(arr, size, key) << " is the index of the given key" << endl;
}
