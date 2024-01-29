#include<iostream>
#include<vector>
using namespace std;
int sieve(int n){
    if(n==0){
        return 0;
    }
    int ans=0;
    vector<bool>prime(n,true);
    for(int i=2;i<n;i++){
          if(prime[i]){
               ans++;
          }
           int j=i*2;
           while(j<n){
             prime[j]=false;
             j=j+i;
           }
    }
  return ans;
        
}
int main(){
    int n;
    cout<<"Enter Number:"<<endl;
    cin>>n;
    int Totalno=sieve(n);
    cout<<Totalno;
return 0;
}