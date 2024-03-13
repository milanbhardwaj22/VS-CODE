#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int GET_MIN(int num[], int n)
{
    int min = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(num[i]<min )
        {
            min=num[i];
        }
    }
    return min; 
    //view content
}

int GET_MAX(int num[] ,int n)
{
int max = INT_MIN;

for(int i=0; i<n; i++)
{
if(num[i]>max)
{
    max= num[i];
}
}
return max;
}

int main()
{
    int size;
cin >> size;   
    int num[100];
    for(int i=0; i<size; i++)
    {
        cin >> num[i]; 
    }

    cout << "maximum number is" << GET_MAX(num,size) << endl;
    cout << "minimum number is" << GET_MIN(num , size) << endl;
return 0;
}