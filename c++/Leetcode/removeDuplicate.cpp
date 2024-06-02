#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>&nums){
         int n=nums.size();
         for(int i=0;i<n;i++){
               while(i>0 && nums[i]==nums[i-1]){
                      int j=n-1;
                      for(int k=i;k<j;k++){
                             nums[k]=nums[k+1];
                      }
                      n--;
               }
         }
         return n;
}
int main(){
  vector<int>nums={0,0,1,1,1,2,2,3,3,4};
   int k=removeDuplicates(nums);
   cout<<k<<endl;
   for(int i=0;i<k;i++){
      cout<<nums[i]<<" ";
   }

    return 0;
}