// #include<stdio.h>
// int sum (int n)
// {
//     if (n==0)
//         return 0;
//         return sum(n-1)+n;
// }
// int main()
// {
//     int r;
//     r = sum(5);
//     printf("%d" , r);
// }

#include<stdio.h>
int fact(int n)
{
    if(n == 0)
    return 1;
    return fact(n-1)*n;
    }

int main()
{
int r;
r = fact(5);
printf("%d" , r);
}