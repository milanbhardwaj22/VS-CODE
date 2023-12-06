#include<iostream>
using namespace std;
int main()
{   
    int arr[]={2,5,7,6,74,3,4,5,65,65};
    int n ;
    n = sizeof(arr)/sizeof(arr[0]);
    int h;
    cout << "enter the target " ;
    cin >> h ;
    bool flag = false ;
    for(int i=0; i<h; i++)
    {
        if(arr[i]==h)
        {
            flag = true;
            break;
        }
    }
    if(flag==true) cout << h << "is present";
    else cout << h << "not present";
}