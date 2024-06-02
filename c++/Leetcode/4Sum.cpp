#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
vector<vector<int>>Find(vector<int> &nums,int target){
    //  vector<int>nums;
    int n=nums.size();
    vector<vector<int>>ans;
    //   int left,right=0;
          sort(nums.begin(),nums.end());
          for(int i=0;i<n-3;i++){
               if(i>0 && nums[i]==nums[i-1])i++;    // skip part
             for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1])j++;  //skip part
                  int left=j+1;
                  int right=n-1;
                while(left<right){
                       int sum=nums[i]+nums[j]+nums[left]+nums[right];
                       if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                            while (left < right && nums[left] == nums[left - 1]) left++;
                            while (left < right && nums[right] == nums[right + 1]) right--;
                       }
                        else if(sum<target){
                               left++;
                        }
                        else{
                             right--;
                        }
                }
             }
          }
     return ans;
}
int main(){
  vector<int> ans={2,-1,-1,0,1};
 int target=-1;
//   int n=ans.size();
 vector<vector<int>>anst=Find(ans,target);

   for (auto i : anst) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}