#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    for(int i=0;i<r;i++){
          for(int j=0;j<r-i;j++){
             cout<<" ";
          }
        if(i==0 || i==r-1){
            for(int k=0;k<2*i+1;k++){
                if(k%2==0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        else{
            for(int d=0;d<2*i+1;d++){
                if(d==0 || d==2*i){
                    cout<<"*";
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