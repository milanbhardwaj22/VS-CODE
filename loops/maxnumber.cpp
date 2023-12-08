#include<iostream>
using namespace std;
int main()
{
    int arr[] ={2,4,5,9,44,4,6,8,7,6,10};
    int n;
     n= sizeof(arr)/sizeof(arr[0]);
     int max;
     max = arr[0];
     for(int i=1; i<n; i++)
     {
        if(arr[i]>max) max = arr[i];
     }
     cout << max;
}


