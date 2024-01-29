#include<iostream>
using namespace std;
int findSqr(int n){
    int target=n;
    int ans;
    int s=0;
    int e=n;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid*mid==target){
            return mid;
        }
        if(mid*mid>target){
            e=mid-1;
        }
        if(mid*mid<target){
             ans=mid;
            s=mid+1;
        }

    }
    return ans;
}
int main(){
    cout<<"Enter the number"<<"\n";
    int n;
    cin>>n;
    int ans=findSqr(n);
    double Finalans=ans;
    double getans;
    int preci;
    cout<<"Enter the precision"<<"\n";
    cin>>preci;
    double step=0.1;
    for(int i=0;i<preci;i++){
             for(double j=Finalans;j*j<=n;j=j+step){
                    Finalans=j;  
                       
             }
             step=step/10; 
    }
    cout<<"The square root of"<<" "<<n<<"\n";
    cout<<Finalans;

return 0;
}