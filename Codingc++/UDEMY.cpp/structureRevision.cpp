// #include<stdio.h>

// #include<iostream>
// using namespace std;

// struct Rectangle
// {
//     int length;
//     int breadth;
//     double x;
// };



// int main()
// {
// struct Rectangle r1 = {10,5};

// r1.length=15;
// r1.breadth = 43;
// cout <<r1.length<< endl;
// cout <<r1.breadth<< endl;

// return 0;
// }

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a =10;
    int *P;
    P = &a;
    printf("%d" , a);
    cout << endl;
    printf("%d" , *P);
}
