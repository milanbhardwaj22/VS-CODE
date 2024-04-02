#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
// struct rectangle 
// {
//     int length ;
//     int breadth ;
// };

// void fun(struct rectangle r)
// {
//     r.length = 45;
//     cout << "length" << r.length << endl<< "breadth" <<r.breadth <<endl;
// }

// int main()
// {
//     struct rectangle r = {10,5};
//     fun(r);
//     printf("length %d \n breadth %d \n"  , r.length , r.breadth );
//     return 0;
// }

struct rectangle 
{
    int length ;
    int breadth;
};
void initialize(struct rectangle *r,int l , int b)
{
r -> length = l;
r -> breadth = b;
}
int area(struct rectangle r)
{
return r.length*r.breadth ;
}

void changelength(struct rectangle *r , int l)
{
    r ->length = l ;
}

int main()
{
    struct rectangle r;
    initialize(&r,10,5);
    area(r);
    changelength(&r,20);
}
