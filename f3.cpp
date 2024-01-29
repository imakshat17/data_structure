#include<iostream>
using namespace std;
int main(){
    cout<<"this is tutorial"<<endl;
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you cannot come to my party"<<endl;

    }
    else if(age==18){
        cout<<"you are kid you will kid pass to the party"<<endl;

    }
    else{
        cout<<"you can come to the party"<<endl;
    }


    return 0;
}