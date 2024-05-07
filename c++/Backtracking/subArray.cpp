#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int SubarrayRec(vector<int>&nums,int start,int end,int &Msum){
    int sum=0;
              if(end==nums.size()){
                  return Msum;
              }

              /// first case solve
                    for(int i=start;i<=end;i++){
                        sum=sum+nums[i];
                        
                        //    cout<<nums[i]<<" ";
                    }
                    sum>Msum?Msum=sum:Msum=Msum;
                    // cout<<"Maximum sum is"<<Msum;
                    cout<<endl;
            // recurssion
               SubarrayRec(nums,start,end+1,Msum);        
}
int util(vector<int>nums,int n){
       int start=0;
       int Msum=INT_MIN;
       int ans;
       for(int start=0;start<n;start++){
          int end=start;
          ans= SubarrayRec(nums,start,end,Msum);
       }
       return ans;
}

int main(){
    vector<int>nums={-1};
    // int sum=0;
    int n=nums.size();
    // SubarrayRec(nums,0,0,sum);
    int ans=util(nums,n);
    cout<<ans;


    return 0;
}