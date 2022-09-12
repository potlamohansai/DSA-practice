// Reversing an Array
#include <iostream>
using namespace std;

void arrayReverse(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);
    arrayReverse(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}