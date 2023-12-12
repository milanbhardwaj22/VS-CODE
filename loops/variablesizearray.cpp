// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the array size :" ;
//     cin >>n;
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     } 
//     for(int i=0; i<n; i++)
//     {cout<<arr[i]<< " ";
// }
// }

// #include<iostream>
// using namespace std;
// int main()
// {   
//     int arr[]={2,5,7,6,74,3,4,5,65,65};
//     int n ;
//     n = sizeof(arr)/sizeof(arr[0]);
//     int h;
//     cout << "enter the target " ;
//     cin >> h ;
//     bool flag = false ;
//     for(int i=0; i<h; i++)
//     {
//         if(arr[i]==h)
//         {
//             flag = true;
//             break;
//         }
//     }
//     if(flag==true) cout << h << "is present";
//     else cout << h << "not present";
// }

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {3,4,5,6,7,4,56,5,44};
    int n = sizeof (arr)/sizeof (arr[0]);
    int x;
    cout << "Enter the targetted number:";
    cin >> x;
    bool flag = false ;
    int i;
    for(i=0; i<x; i++)
    {
        if(arr[i] == x)
        {
            flag = true;
        }
    }
    if(flag == true )
    {
        cout << x << "number is present ";
    }
    else{
        cout << x << "number is not present";
    }
}

