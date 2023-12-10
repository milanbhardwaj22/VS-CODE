
// #include<iostream>
// using namespace std;
// class hero {
//     char level; 
//     public :
//     int health ;
     

//     void print()
//     {
//         cout << level << endl;
//     }
//     char getlevel()
//     {
//         return level ;
//     }
//     void setlevel(char x){
//         level=x;
//     }
// };
 
//  int main()
// {
//     hero sharma ;
//     // cout<< "sharma level is" << sharma.getlevel() << endl;
//     sharma.health = 50;
//     sharma.setlevel('A');

//     cout<< "health is " << sharma.health << endl;
//     cout<< "level is " << sharma.getlevel() << endl;
    
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class vehicle{
public:
    int engine;
    int horn;
    vehicle(){
        cout << "vehicle" << endl;
    }
};
class bike : public vehicle{
public:
    int headlight;
    bike(){
        cout << "bike" << endl;
    }
};
class car : public vehicle{
public:
    int headlight;
    car(){
        cout << "car" << endl;
    }
};
int main(){
car c;
}
