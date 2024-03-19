#include<iostream>
#include<stdio.h>
using namespace std;
int swap(int &a, int &b)
{
    int temp =a;
    a= b;
    b = temp;
}
int main()
{
 int x=34;
 int y=45;
 swap(x,y);
 printf("%d" "%d" , x ,y ); 
}