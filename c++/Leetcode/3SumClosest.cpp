#include<iostream>
#include<vector>
#include <climits>
#include <algorithm>
using namespace std;
int FindClosestSum(vector<int>&nums,int target){
    sort(nums.begin(),nums.end());
       int value=INT_MAX;
       int sum=0;
       int ans=0;
       int n=nums.size();
       for(int i=0;i<n;i++){
        int j=i+1;
         int k=n-1;
           int first=nums[i];
           int second=nums[j];
           int third=nums[k];
               while(j<k){
                
                      sum=first+second+third;
                      if(sum==target)return target;
                        else if(abs(sum-target)<value){
                              value=abs(sum-target);
                              ans=sum;
                        }
                        if(sum>target){
                            k--;
                        }
                        else{
                            j++;
                        }
               }

       }
       return ans;
       
       }
int main(){
    vector<int>nums={-1,2,1,-4};
    int target=1;
    int ans=FindClosestSum(nums,target);
    cout<<ans<<endl;
return 0;
}