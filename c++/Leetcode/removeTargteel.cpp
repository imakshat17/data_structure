#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int remove(vector<int>&nums, int val){
      int n=nums.size();
      stack<int>st;
      for(int i=0;i<n;i++){
           st.push(nums[i]);
           int temp=st.top();
            if(temp==val){
                  st.pop();
            }
      }
    //   int ans=st.size();
    int k=0;
      while(!st.empty()){
            nums[k]=st.top();
            st.pop();
            k++;
      }
      return k;
}
int main(){
    vector<int>arr={1,2,1};
     int val=1;
 int ans=remove(arr,val);
 cout<<ans<<endl;
   for(int i=0;i<ans;i++){
     cout<<arr[i]<<" ";
   }
    return 0;
}