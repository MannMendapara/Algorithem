#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {4, -3, -67, 8, 9, -6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Stable partition the array using a lambda function
    stable_partition(arr, arr + n, [](int x) { return x >= 0; });

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
