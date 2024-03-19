#include<stdio.h>
#include<iostream>
using namespace std;

int add( int a, int b)
{
    int c;
    c = a+b;
    
    return c;
}

int main()
{
      int num1 = 34;
      int num2 = 45;
      int sum;

    sum = add(num1, num2);
    cout << "sum is " << sum;
    return 0;
}
