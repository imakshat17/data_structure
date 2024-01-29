#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //  int x=1;
    //  cout<<x<<"\n";
    cout<<"Enter row"<<"\n";
    int n;

    cin>>n;
    for(int i=0;i<=n;i++){ 
        for(int sp=0;sp<(n-i);sp++){
            cout<<" ";
        }     
    double powResult = pow(11, i);
    int z = static_cast<int>(round(powResult));
    while(z>0){
        int r=z%10;
        cout<<r<<" ";
        z=z/10;
    }
    cout<<"\n";
    }

    
return 0;
}