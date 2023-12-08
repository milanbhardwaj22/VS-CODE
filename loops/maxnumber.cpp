
#include<iostream>
using namespace std;
int main()
{
int arr[]= {2,3,4,5,5,66,77,76,78};
int n = sizeof(arr)/sizeof(arr[0]);
int mx = arr[0];
for (int i=1; i<n; i++)
{
        if(mx<arr[i]) mx= arr[i];
}
cout << mx;
}

