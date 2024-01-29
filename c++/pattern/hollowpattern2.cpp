#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int sp=0;sp<n-i;sp++){
            cout<<" ";
            
        }
         if(i==0 || i==n-1){
             int start=0;
             for(int j=0;j<(2*i+1);j++){
                if(j%2==0){
                    cout<<++start;
                }else{
                    cout<<" ";
                }
             }
         }
         else{
            for(int j=0;j<(2*i+1);j++){
                if(j==0){
                    cout<<1;
                }
                else if(j==2*i){
                    cout<<i+1;
                }
                else{
                    cout<<" ";
                }
            }
         }
         cout<<endl;
    }

return 0;
}