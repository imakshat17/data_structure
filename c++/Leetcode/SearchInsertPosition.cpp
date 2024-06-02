#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>&nums, int target){
         int n=nums.size();
         // edge cases
         if(n==1){
             if(nums[0]==target){
                 return 0;
             }
             else{
                 return 1;
             }
         }
         if(target>nums[n-1]){
              return n;
         }
         // edge cases close
          int low=0;
          int high=n-1;
           while(low<high){
                int mid=low + (high - low) / 2;
                if(target==nums[mid]){
                     return mid;
                }
                if(target>=nums[low] && target<=nums[mid]){
                    
                         high=mid-1;
                }
                else if(low==mid){
                    cout<<"Entered";
                       if(target>nums[low] || target>nums[high]){
                           return low+1;
                       }
                }
                else{
                    low=mid;
                }
           }
}
int main(){
    vector<int> nums={1,3,5,6};
    int target=4;
    int index=searchInsert(nums,target);
    cout<<index;

     return 0;
}