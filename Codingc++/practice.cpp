
// #include <iostream>
// using namespace std;
// int main()
// {
//     string str ;
//     getline(cin , str );
//     int count =0;
//     for (int i=0; i<str.length() ; i++)
//     {
//         if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U')
//         {
//             count ++;
//         }
//     }
//     cout << count ;
// }

//AANAGRAM
// #include<iostream>
// using namespace std;
// #include<string>
// #include<stdio.h>
// int main()
// {
//     int day,month,year;
//     cin >> day>>month>>year ;
//     if(month >=1 && month <=12){
//         switch(month)
//         {
//             case 1:
//             case 3:
//             case 5 :
//             case 7:
//             case 9:
//             case 11:
//         if(day<=31){
//             cout<<"its a valid" ;
//         }
//         break;
//         case 4:
//         case 6:
//         case 8:
//         case 12:
//         if(day <=30){
//             cout <<"its a valid" ;
//         }
//         break ;
//         case 2:
//         if(day == 28 && day ==29)
//         {
//             cout << "valid" ;
//         }
//         break;
//         default:
//         cout << "invalid " ;
//         }
//     }
// }