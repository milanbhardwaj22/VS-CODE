 #include<stdio.h>
 #include<iostream>
 using namespace std;
 int main()
{
    // int a = 10;
    // int *p ;
    // p = &a;
    // printf("%d" , a);
    // cout << endl;   
    // printf("%d" , *p);
    // int a = 10;
    // int *p;
    // p = &a;
    // cout << a;
    // printf(" using pointer %d " , *p);
    int A[5] = {2,3,4,5,6};
    int *p;
     p = A;
    for (int i=0; i<5; i++)
    cout << A[i] << endl;
}