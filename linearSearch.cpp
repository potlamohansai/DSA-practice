// linear Search

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);
    int key = 30;
    cout << linearSearch(arr, size, key) << " is found" << endl;
}