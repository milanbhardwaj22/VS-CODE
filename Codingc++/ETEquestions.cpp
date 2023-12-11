// //question 1 of constructor
// #include<iostream>
// using namespace std;
// class chknumber
// {

// public :
// int value ;
// chknumber( int n)
// {
// value = n;

// if(value>0)
// cout<< value <<" number is positive" << endl;
// else if(value == 0)
// cout << value << "number is neutral" << endl;
// else 
// cout << value <<"number is negative" << endl;
// }
// };
// int main()
//     {
//         int n;
//      cout << "enter number";
//     cin >> n;
//     chknumber num (n);
//     }


// #include <iostream>
// using namespace std;
// int main(){
//      string str;
//      getline(cin,str);
//      int count=0;
//      for(int i=0;i<str.length();i++){
//         if(str[i]=='o'||str[i]=='i'||str[i]=='e'||str[i]=='a'||str[i]=='U'||str[i]=='O'||str[i]=='I'||str[i]=='E'||str[i]=='A'||str[i]=='u'){
//             count++;
//         }
//      }
//      cout<<count;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num ;
//     cout << "enter a number please : " << endl;
//     cin >> num;
//     int ans =0;
//     while (num != 0)
//     {
//         int rem = num % 10;
//         ans +=(rem *rem*rem);
//         num = num /10;
//     }
//     if(ans ==num)
//     cout << num <<"is a armstrong number " << endl;
//     else
//     cout << num << "not a armstrong number" << endl;

// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int num ;
//     cout << "enter the number" << endl;
//     cin >> num;
//     int tmp = num;
//     int ans = 0;
//    while(tmp != 0)
//    {
//     int rem = tmp %10;
//     ans += (rem*rem*rem);
//     tmp = tmp /10;
//    }
//    if(ans ==num)
//    cout << "number is a armstrong" << endl;
//    else 
//    cout << "number is not a armstrong number" << endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     string str;
//     getline(cin , str);
//     int count = 0;
//     for (int i =0; i <str.length() ; i++)
//     {
//         if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ||str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U' 
//           )
//           {
//         count ++;
//           }
//     }
//     cout << count ;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "enter the number" << endl;
//     cin >> num;
//     if (num %= 2)
//     {
//         cout << "number is not prime " << num << endl;
//     }
//     else 
//     {
//         cout << "number is  prime " << num << endl;
//     }
// }

// #include<iostream> 
// using namespace std;
// #include<string.h>
// #include<stdio.h>

// int main()
// {
//     char str1[100], str2[100];
//     gets(str1);
//     gets(str2);
//     int i,j;
//     int n1=strlen(str1);
//     int n2=strlen(str2);
//     int c=0;
//     if(n1!=n2)
//     {
//           cout<<"\nThey are not anagrams ! ";
//           return 0;
//     }
//     else 
//     cout << "they are anagrams " << endl;
// }
//     {
//          for(i=0;i<n1;i++)
//              for(j=0;j<n2;j++)
//                  if(str1[i]==str2[j])
//                      ++c;
//     }
//     if(c==n1)
//         cout<<"yes ! anagram !! ";
//     else 
//         cout<<"no ! ";

//     system("pause");
//     return 0;
// }

//  #include<iostream> 
// using namespace std;
// #include<string.h>
// #include<stdio.h>
// int main()
// {
//     char str1[100] , str2[100];
//     gets(str1);
//     gets(str2);
//     int i,j;
//     int n1 = strlen(str1);
//     int n2= strlen(str2);
//     int c= 0;
//     if(n1 != n2)
//     {
//         cout<< "not a anagram "<< endl;
//     }
//     else
//     {
//         for (i =0 ; i<n1; i++)
//         for (j=0; j<n2; j++)
//         if(str1 == str2)
//         {
//             cout << "its a anagram" << endl;
//         }
//         else 
//         {
//             cout << "not a anagram "<< endl;
//         }
//     }
//     system("pause )



//     #include <iostream>
// using namespace std;
// int main()
// {
// int  i, j, n;
// cout << "Enter number of rows:  ";
// cin >> n;
// for(i = 1; i <= n; i++)
// {
// for(j = 1; j <= i; j++)
// {
// cout << "* ";
// }
// //Ending line after each row
// cout << "\n";
// }
// return 0;
// }

#include<iostream>
using namespace std;
int main()

{
    int i,j,n;
    cout << "enter the rows"<< endl;
    cin >> n;
    for(i =1; i<=n; i++)
{
    for (j=1; j<=i; j++)
    {
        cout << "* ";
    }
    cout << " \n";
}


return 0;
}