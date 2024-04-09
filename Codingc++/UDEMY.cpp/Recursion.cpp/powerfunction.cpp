#include<stdio.h>
int power(int m , int n)
{
    if(n == 0 )  
    return 1;
    if( n%2 == 0)
    return power(m*m  ,n /2);  // if the condition if even .
    return m*power(m*m , (n-1)/2); // if the condition is odd.
}

int main()
{
    int r; // variable is declared.
    r = power(2,4); // used for assising the values.
    printf("%d" , r);

}