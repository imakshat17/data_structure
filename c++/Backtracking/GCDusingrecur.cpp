#include<iostream>
using namespace std;
int GCD(int x, int y){
if(x==0){
    return y;
}   
if(y==0){
    return x;
}
 if(x>=y){
    GCD(x-y,y);
 }
 else{
    GCD(x,y-x);
 }
      
}
int main(){
    int x;
    cin>>x;
    int y;
    cin>>y;
    int ans=GCD(x,y);
    cout<<"Greatest Common Divisor: "<<endl;
    cout<<ans;


    return 0;
}