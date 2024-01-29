#include<iostream>
using namespace std;
int main(){
      cout<<"Enter the row";
      int n;
      cin>>n;
      for(int row=0;row<n;row++){
        for(int sp=0;sp<n-row-1;sp++){
            cout<<" ";
        }
        for(int st=0;st<row+1;st++){
            cout<<"* ";
        }
        cout<<endl;
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"* ";
        }
        cout<<endl;
      }
return 0;
}