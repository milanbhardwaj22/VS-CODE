#include<iostream>
#include<stdio.h>
#include<stdlib.h>.
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
void fun(struct rectangle r)
{
    r.length  =20;
    cout << "length" << r.length << endl << "breadth" << r.breadth << endl;
}

int main()
{
    struct rectangle r= {10,5};
    fun(r);
    {
       
       printf("length %d \n breadth %d \n" , r.length, r.breadth)
       return 0;
    };
    
}
