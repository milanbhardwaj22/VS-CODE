#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size";
    cin >> n;
    int A[n];

    
    A[0]= 2;

    for(int x:A)
    {
        cout << x << endl;
    }
}
