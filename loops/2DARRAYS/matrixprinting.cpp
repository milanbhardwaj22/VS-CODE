#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    for(int i =0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i =0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 
}

#include<iostream>
using namespace std;
int main()
{
    int arr[4][3];
    for(int col=0; col<4; col++)
    {
        for(int row=0; row<3; row++)
        {
            cin>> arr[col][row];
        }
    }
    for(int col=0; col<4; col++)
    {
        for(int row=0; row<3; row++)
        {
            cout<< arr[col][row] << " ";
        }
        cout << endl;
    }

    
}