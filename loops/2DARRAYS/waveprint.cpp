// #include<iostream>
// using namespace std;
// int main()
// {
//     int r , c;
//     cin >> r >> c;
//     int arr[r][c];

//     for(int i= 0;  i<r; i++)
//     {
//         for(int  j=0 ; j<c; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for(int j= 0; j<c; j++)
//     {
//     if(j %2 == 0)
//     {
//         for( int i=0 ; i<r; i++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     else
//     {
//         for(int i =r-1; i>=0; i--)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int r, c;
//     cin >> r >> c;
//     int arr1[r][c];
//     int arr2[r][c];
//     for(int i= 0;  i<r; i++)
//     {
//         for(int  j=0 ; j<c; j++)
//         {
//             cin >> arr1[i][j];
//         }
// }
// for(int i= 0;  i<r; i++)
//     {
//         for(int  j=0 ; j<c; j++)
//         {
//             cin >> arr2[i][j];
//         }
// }
// int ans[r][c];
// for (int i= 0 ; i<r; i++)
// {
//     for(int j =0; j<c; j++)
//     {
//         ans[i][j]=0;
//         for(int k=0 ; k<c; k++)
//         {
//             ans[i][j] += arr1[i][k] * arr2[k][j];
//         }
//     }
// }
// for(int i =0; i<r; i++)
// {
//     for(int j =0; j<c; j++)
//     {
//         cout << ans[i][j] << " ";
//     }
// }
// }
 

//  //unique element
//  #include<iostream>
//  #include<vector>
//  #include<map>
// using namespace std;
// int main()
// {
//     vector < int > val;
//     int n;
//     cin >> n;
//     for (int i = 0; i<n; i++)
//     {
//         int x;
//         cin >> x;
//         val.push_back(x);
//     }
//     map<int ,int >mp;
//     for (int i =0; i<n; i++)
//     {
//      mp[val[i]]++;
//     }
//     for(auto i: mp)
//     {
//         if(i.second ==1)
//         {
//             cout << i.first << endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int row , col;
//    cin >> row ;
//    cin >> col ;
//    int arr[row ][col];
//    for (int i =0 ; i<row; i++)
//    {
//     for (int j =0 ; j<col; j++)
//     {
//         cin >> arr[i][j];
//     }
//    }
//    for(int i =0; i<row; i++)
//    {
//     if(i %2!=0)
//     {
//         for(int j=col-1; j>=0; j--)
//         {
//             cout << arr[i][j]<<" ";
//         }
//     }
//     else{
//         for (int j=0; j<col; j++)
//         {
//             cout << arr[i][j]<< " ";
//     }
// }
// }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int row , col ;
//       cin >> row ;
//        cin >>col;
//     int arr[row][col];
//     for(int i= 0; i<row; i++)
//     {
//         for(int j=0; j<col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for(int j=0; j<col; j++)
//     {
//         if(j % 2 != 0)
//         {
//             for(int i=row-1; i>=0; i--)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//         else
//         {
//             for(int i= 0; i<row; i++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int row,col;
//     cin >> row;
//     cin >> col;
//     int arr[row][col];
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin >> arr[i][j];
//         }

    
//     int arr2[col][row];
//     for(int i=0;i<col;i++){
//         for(int j=0;j<row;j++){
//             arr2[i][j] = arr[j][i];
//         }
//     }
//     for(int i=0;i<col;i++){
//         for(int j=0;j<row;j++){
//             cout << arr2[i][j] << " ";
//         }
//         cout <<endl;
// }
// }

#include<iostream>
using namespace std;
int main()
{
    int r, c;
    cin >>r;
    cin >>c;
    int arr1[r][c];
    int arr2[r][c];
    for(int i =0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin >> arr1[i][j];
        }
    }
     for(int i =0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int arr3[r][c];
     for(int i =0; i<r; i++)
     {
         for(int j=0; j<c; j++)
         {
            arr3[i][j]= 0;
            for(int k=0; k<c; k++)
            {
                arr3[i][j] = arr1[i][k] * arr2[k][j];
            }
         }
     }
     for(int i =0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << arr3[i][j] << " ";
        }
    }
    
}
