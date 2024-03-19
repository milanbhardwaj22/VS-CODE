#include<iostream>
#include<stdio.h>
using namespace std;
void swap(int *a, int  *b)
{
    int temp =  *a;
     *a= *b;
     *b = temp; 
}
int main()
{
    int x = 10;
    int y = 20; 
     swap(&x,&y);
     printf("%d"  "%d" , x , y);
}