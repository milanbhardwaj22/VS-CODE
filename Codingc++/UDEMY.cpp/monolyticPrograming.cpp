#include<iostream>
#include<stdio.h>
// int area (int length , int breadth)
// {
//     return length * breadth ;
// }
// int perimeter( int length , int breadth)
// {
//     int p ;
//     p = 2*(length + breadth);
//     return p;
// }
// int main()
// {
//     int length  , breadth ;
//     printf("enter the length and breadth \n");
//     scanf ("%d" &length  "%d" &breadth );

//     int area = (length , breadth);
//     int perimeter = (length , breadth);

//     printf("area = %d \n perimeter = %d \n"  , area ,perimeter);
// }
struct rectangle
{
    int length ;
     int breadth ;
};
void initialize(struct rectangle *r , int length ,int breadth)
{
    r -> length = l;
    r -> breadth= b;
}

int area(struct rectangle r)
{
    return r.length*r.breadth;
}
int perimeter(struct rectangle r)
{
    int p;
    p = 2*(r.length + r.breadth);
    return p;
}

int main()
{
    rectangle{0,0};
    int l,b;
    printf("enter the length and breadth");
    cin >> l >> b ;
    initialize(&r , l ,b);
    int area(r) ;
    int perimeter(r);
    printf("area = %d \n perimeter = %d \n" , area , perimeter);
    return 0;
}