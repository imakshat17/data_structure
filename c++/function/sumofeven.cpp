#include<iostream>
using namespace std;
int getsum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
            if(i%2==0){
                sum=sum+i;
            }
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number upto you want to add";
    cin>>n;
    int sum=getsum(n);
    cout<<"The result is:"<<sum;
return 0;
}