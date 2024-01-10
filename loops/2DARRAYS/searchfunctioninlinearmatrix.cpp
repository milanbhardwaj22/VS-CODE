// #include<iostream>
// using namespace std;
// bool ispresent(int arr[3][4] , int target, int row, int col )  
// {
//     for(int row=0; row<3; row++)
//     {
//         for(int col=0; col<3; col++)
//         {
//          if (arr[row][col] == target)
//          {
//             return 1;
//          }
//         }
//     }
//     return 0;
// }
//     int main()
//     {
//     int arr[3][4];
//     for(int row=0; row<3; row++)
//     {
//         for(int col=0; col<3; col++)
//         {
//          cin >> arr[row][col];
//         }
//     }

//     for(int row=0; row<3; row++)
//     {
//         for(int col=0; col<3; col++)
//         {
//          cout << arr[row][col]  << " ";
//         }
//         cout << endl;
//     }
     
//      cout<< "enter the number to be searched" << endl;
//      int target ;
//      cin >> target ;
//      if(ispresent (arr,target,3,3))
//      {
//         cout<<"element is present" << endl;
//      }
//      else{
//         cout<< "element is not present" <<endl;
//      }
//     }


#include <iostream>
using namespace std;
int main (){
   int arr[] = { 2, 5, 7, 8, 2, 6, 9 };
   int n = 7, sum = 0;
   for(int i = 0; i<n ; i++){
      sum+=arr[i];
   }
   cout<<"The array sum is "<<sum;
   return 0;
}
