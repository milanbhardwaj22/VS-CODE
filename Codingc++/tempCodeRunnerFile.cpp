#include <iostream>
using namespace std;
int main(){
     string str;
     getline(cin,str);
     int count=0;
     for(int i=0;i<str.length();i++){
        if(str[i]=='o'||str[i]=='i'||str[i]=='e'||str[i]=='a'||str[i]=='U'||str[i]=='O'||str[i]=='I'||str[i]=='E'||str[i]=='A'||str[i]=='u'){
            count++;
        }
     }
     cout<<count;
}
