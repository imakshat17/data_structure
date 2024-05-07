#include<iostream>
using namespace std;
int FindmaxWater(int nums[],int n){
   if(n==1){
     return nums[0];
   }
    int sum=0;
       for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
                int prd=nums[i]*(j-i);
                prd>sum?sum=prd:sum=sum;
         }
       }
       return sum;
}
int main(){
    int arr[]={1,2,3};
    int n=3;
    int ans=FindmaxWater(arr,n);
    cout<<ans;
     return 0;
}