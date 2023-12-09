#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number \n";
    cin >> n;
    // int arr[n] ;
    vector<int>arr(n);
    for(int i= 0; i<n; i++ )
    {
        cin >> arr[i];
    }
     for(int i= 0; i<n; i++ )
    {
        cout << arr[i];
}
cout<<endl;
cout<<arr.capacity()<<endl;

arr.push_back(10);
cout<<arr.size();
}

