
#include<iostream>
using namespace std;
int main()
{
    int arr[]= {25,6,7,8,56,4,23,5,8};
    int n ;
    n = sizeof (arr)/sizeof(arr[0]);
    int max = INT8_MIN;

    int smax = INT8_MIN;

    max = arr[0];
    for(int i = 0; i<n; i ++)
    {
        if(arr[i]>max) max= arr[i];
    }

    for(int i =0; i<n; i++)
    {
        if(arr[i]>smax && smax != max)
        smax= arr[i];
    }
    cout << smax ;
}
