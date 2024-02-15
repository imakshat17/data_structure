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
int LCM(int product,int GCD){
      return product/GCD;
}
int main(){
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    int ans=GCD(a,b);
    

    int ans2=LCM(a*b,ans);
    cout<<"GCD is: "<<ans<<endl;
    cout<<ans2;
    
    

    
    
    
return 0;
}