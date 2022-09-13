/* Implement a function that takes array of integers as input and returns the largest element.
Sample Input
-3 4 1 2 3
-1 -2 -3 -3 8

Sample Output
4
8
*/

#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> arr)
{
    int largest = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

// driver Code
int main()
{
    vector<int> arr = {-2, 6, -1, 3, 8, -10};
    cout << largestElement(arr);
}