#include<iostream>
using namespace std;
int main(){
    cout<<"Enter row\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                cout<<i+1;
                if(j!=i){
                    cout<<"*";
                }
            }
            cout<<endl;
    }
return 0;
}