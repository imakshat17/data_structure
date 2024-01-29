#include<iostream>
#include<vector>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans={};
        for(int i=0;i<nums.size();i++){
              for(int j=1;j<nums.size();j++){
                  if(nums[i]+nums[j]==target && i!=j){
                    ans.push_back(i); 
                    ans.push_back(j); 
                    return ans;
                  }
              }
        }
        return ans;
    }
int main(){
vector<int>nums={2,5,5,11};
int target=10;
vector<int> ans=twoSum(nums,target);
for(auto i:ans){
     cout<<i;
}
cout<<endl;
    
return 0;
}