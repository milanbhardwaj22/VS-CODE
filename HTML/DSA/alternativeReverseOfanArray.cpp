#include<iostream>
using namespace std;
int main()
{
    int arr[8] = {9,8,7,6,5,4,3,2};
    int brr[5] = {2,3,4,5,6};

alternativereverse(arr,8);
printarray(arr,8);

cout << endl;

}

void alternativereverse(int arr[] , int size)
{
 for(int i =0; i<size; i+=2 )
 {
    if(i + 1 < size){
        swap(arr[i] , arr[i +1]);
    }
 }
}

void printarray(int arr[] , int n )
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
} 