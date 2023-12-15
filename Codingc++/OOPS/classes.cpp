#include<iostream>
using namespace std;

class fruit{
    public:
    string name;
    string color;
    string shape;
};
class student{
    string name ;
    int roll_no ;
};
int main()
{
    fruit apple;
    apple.name = "apple";
    apple.color = "red";
    cout<< apple.name <<" - " <<apple.color<<endl;

    fruit *mango= new fruit ();
    mango->name = "mango";
    mango ->color = "yellow";
    cout<<mango->name << " - " << mango->color;
    return 0;
}