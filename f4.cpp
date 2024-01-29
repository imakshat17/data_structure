#include<iostream>
using namespace std;
int main(){
int n;
int i=1;
cout<<"Enter the number you want the table of"<<endl;
cin>>n;
while(i<=10){
    cout<<n<<"x"<<i<<"="<<n*i<<endl;
    i++;
}

return 0;
}