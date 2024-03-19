#include<iostream>
#include<stdio.h>
using namespace std;
void fun(int *A, int n)
{
int i;
for(i=0; i<n; i++)
printf("%d" , A[i]);
}

// int main()
// {
//     int A[5] = {2,3,4,5,6};
//     fun(A,5);
void fun(int A[])
{

}
int  main()
{
    int A[]= {2,4,5,6,7};
    int n = 6;
    for(int x:A)
    cout << x << endl;
    return 0;
}
