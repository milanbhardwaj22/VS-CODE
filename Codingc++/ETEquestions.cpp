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

#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin , str);
    int count = 0;
    for (int i =0; i <str.length() ; i++)
    {
        if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ||str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U' 
          )
          {
        count ++;
          }
    }
    cout << count ;
}
