#include<iostream>
using namespace std;
void reverse(int arr[] , int n)
{
    int start =0;
    int end = n-1;
    while(start <= end)
    {
        swap(arr[start] , arr[end]);
        start ++;
        end -- ;
    }
}
void printArray(int arr[] , int n)
{
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
int arr[4] = {1,2,3,4};   //initialisation of the array
int brr[5] = {-3,4,5,8,9};
    reverse(arr ,4);
    reverse(brr ,5);
printArray (arr ,4);
printArray (brr ,5);
return 0;
} 

