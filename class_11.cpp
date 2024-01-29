#include<iostream>
using namespace std;
int main(){
int i=1;
int n;
cout<<"Enter the num whose you table"<<endl;
cin>>n;
do{
    cout<<n<<"X"<<i<<"="<<n*i<<endl;
    i++;
}while(i<=10);

    return 0;
}

