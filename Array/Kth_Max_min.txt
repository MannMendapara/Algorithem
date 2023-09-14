#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={3,45,6,7,63};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int *minElem = min_element(arr + 2, arr + n);  //here *minElem is iterator pointing to the first element 
    //code here to find max 
    cout << "Minimum element: " << *minElem << endl;
    return 0;   
}
