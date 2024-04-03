#include<iostream>
#include<stdio.h>
int area (int length , int breadth)
{
    return length * breadth ;
}
int perimeter( int length , int breadth)
{
    int p ;
    p = 2*(length + breadth);
    return p;
}

int main()
{
    int length  , breadth ;
    printf("enter the length and breadth \n");
    scanf ("%d" &length  "%d" &breadth );

    int area = (length , breadth);
    int perimeter = (length , breadth);

    printf("area = %d \n perimeter = %d \n"  , area ,perimeter);
}
