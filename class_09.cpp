#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"You are 18";
        break;
    
    case 22:
        cout<<"You are 22";
        break;
    
    default:
        cout<<"No special cases"<<endl;
        break;
    }

    return 0;
}