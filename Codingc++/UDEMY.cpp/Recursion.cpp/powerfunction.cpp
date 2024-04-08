#include<stdio.h>
int power(int n , int m)
{
    if(n == 0)
    return 1;
    if( n %2 == 0)
    return power(m*m, n/2);
    return m * power(m*m , (n-1)/2);
}

int main()
{
    int r = power(2,4);
    printf("%d" , r);
}