#include<iostream>
#include<unordered_set>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr1[]={6,5,14,3,65,7,8};
    int arr2[]={63,5,54,3,46,7,8};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);

    unordered_set<int>Union;
    for (int i = 0; i < m; ++i) {
        Union.insert(arr1[i]) ; 
    }

    for (int i = 0; i < n; ++i) {
        Union.insert(arr2[i]) ; 
    }

   int number = Union.size(); // Use .size() to get the count of elements
    cout << number;
    return 0;
    
}
