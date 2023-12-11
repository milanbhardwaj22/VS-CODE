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
 
 #include<iostream>
 #include<vector>
 #include<map>
using namespace std;
int main()
{
    vector < int > val;
    int n;
    cin >> n;
    for (int i =0; i<n; i++)
    {
        int x;
        cin >> x;
        val.push_back(x);
    }
    map<int ,int >mp;
    for (int i =0; i<n; i++)
    {
     mp[val[i]]++;
    }
    for(auto i: mp)
    {
        if(i.second ==1)
        {
            cout << i.first << endl;
        }
    }
}


