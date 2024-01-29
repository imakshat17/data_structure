#include<iostream>
#include<vector>
using namespace std;
int solve(int divi, int divis){
      int s=0;
      int e=abs(divi);
      int ans=0;
      int mid=s+(e-s)/2;
      while(s<=e){
          
          if(abs(mid*divis)==abs(divi)){
            ans=mid;
            break;
          }
           if(abs(mid*divis)>abs(divi)){
                  e=mid-1;
           }
           else{
              ans=mid;
              s=mid+1;
           }
           mid=s+(e-s)/2;
      }
      if((divi>0 && divis>0) || (divi<0 && divis<0)){
         return ans;
      }
      else{
        return -ans;
      }
}
int main(){
    int divisor=2;
    int dividend=-12;
    int ans=solve(dividend,divisor);
    cout<<"Quotient is: ";
    cout<<ans;
return 0;
}
