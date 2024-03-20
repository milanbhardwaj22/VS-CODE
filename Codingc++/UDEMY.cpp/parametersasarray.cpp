#include<iostream>
using namespace std;
int * fun(int size)  // *represent its a pointer , fun is a function
{
    
    int *p ; //*p is a pointer
    p = new int[size]; //array is assigned to a pointer

    for(int i=0; i<size ; i++)
    p[i] = i+1; // +2 is used for proper memory allocation
    return p;
}
int main()
{
    int * ptr , size =7;
    ptr = fun(size);
    for (int i=0; i<size; i++)
    cout << ptr[i] << endl;
    return 0;

}
