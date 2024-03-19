#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a =19;
    int &r=a ;
    int b= 30;
    r =b;
    cout << a << endl <<  r << endl;
}