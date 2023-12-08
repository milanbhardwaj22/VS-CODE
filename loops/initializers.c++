

#include<iostream>
using namespace std;
int main()
{
    int arr[]= {2,3,4,5,4,4,54,3,4,54};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<=n-1 ; i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}


