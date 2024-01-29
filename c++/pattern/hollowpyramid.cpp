#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of rows";
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int i=0;i<n-row-1;i++){
            cout<<" ";
        }
        for(int st=0;st<2*row+1;st++){
          if(st==0){
            cout<<"* ";
          }
          else if(st==2*row){
            cout<<"*";
          }
          else{
            cout<<" ";
          }
          
                                  }   
                cout<<endl;
 
}
for(int row=0;row<n;row++){
      for(int sp=0;sp<row;sp++){
          cout<<" ";
      }
      for(int st=0;st<(2*n-(2*row+1));st++){
          if(st==0 || st==(2*n-(2*row+1))-1){
            cout<<"* ";
          }
          else{
            cout<<" ";
          }
      }
      cout<<endl;
}
return 0;
}