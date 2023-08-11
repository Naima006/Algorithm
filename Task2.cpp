#include <iostream>
using namespace std;

int findSum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return findSum(arr, n - 1) + arr[n - 1];
    }
}

int main()
{
    int ar[] = {1, 3, 5, 9, 2};
    int arlen = sizeof(ar) / sizeof(ar[0]);

    int sum = findSum(ar, arlen);
    cout << "Sum of the array: " << sum << endl;

    return 0;
}

