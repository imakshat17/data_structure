#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int r=0;r<n;r++){
        for(int el=0;el<n-r;el++){
            cout<<"*";
        }
        for(int sp=0;sp<(2*r);sp++){
            cout<<" ";
        }
         for(int el=0;el<n-r;el++){
            cout<<"*";
        }

       cout<<endl;
    }
    for(int r=0;r<n;r++){
        for(int el=0;el<r+1;el++){
            cout<<"*";
        }
        for(int sp=0;sp<((n+2)-(r*2));sp++){
            cout<<" ";
        }
        for(int el=0;el<r+1;el++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}