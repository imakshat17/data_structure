#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
          for(int j=0;j<(5-i-1);j++){
            cout<<" ";
          }
          for(int el=0;el<i+1;el++){
            cout<<el+i+1;
          }
        //   cout<<endl;
       
        // cout<<endl;
        for(int k=0;k<i;k++){
            cout<<(2*i-k);
        }
        cout<<endl;
    }
return 0;
}