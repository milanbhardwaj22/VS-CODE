#include <iostream>
using namespace std;
void printsum(int arr[3][3], int row, int col)
{
    cout << "printing sum " << endl;
    {
        for (int row = 0; row < 3; row++)

        {
            int sum = 0;
            for (int col = 0; col < 3; col++)
            {
                sum += arr[row][col];
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}

int largestrow(int arr[3][3], int row, int col)
{ 
    int max =0;
        for (int row = 0; row < 3; row++)
        {
            int sum = 0;
            for (int col = 0; col < 3; col++)
            {
                sum += arr[row][col];
            }
            if (sum > max)
                max = sum;

        
        cout << "maximum is" << max;
    }
    cout << endl;
}

int main()
{
    int arr[3][3];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    printsum(arr, 3, 3);
    largestrow(arr , 3,3);
}


