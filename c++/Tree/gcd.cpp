#include<iostream>
using namespace std;
int gcd(int n,int m){
       if(n>m && m==0){
           return n;
       } 
       if(m<0){
        return 1;
       } 
      return gcd(n,m-n);
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
      int ans=gcd(n,m);
      cout<<ans;
return 0;
}