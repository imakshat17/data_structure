#include<iostream>
using namespace std;
int GCD(int a, int b){
     if(a==0){
         return b;
     }
     if(b==0){
        return a;
     }
     while(a>0 && b>0){
          if(a>b){
              a=a-b;
          }
          else{
             b=b-a;
          }
     }
     return a==0?b:a;
}
int main(){
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    int ans=GCD(a,b);
    cout<<"GCD is: "<<ans;

    

    
    
    
return 0;
}