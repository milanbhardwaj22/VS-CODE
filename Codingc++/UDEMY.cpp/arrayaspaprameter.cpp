#include<iostream>
#include<stdio.h>
using namespace std;
void fun(int *A, int n)
{
int i;
for(i=0; i<n; i++)
printf("%d" , A[i]);
}


int main()
{
    int A[5] = {2,3,4,5,6};
    fun(A,5);
}
