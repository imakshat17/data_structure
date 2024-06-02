#include<iostream>
#include<vector>
using namespace std;
int find(vector<int> &nums,int target){
          int n=nums.size();
          //edge case
          if(n==1){
            return 0;
          }
          int pivot;
         for(int i=0;i<n;i++){
            // edge case 2 same element
             if(nums[i]==nums[i+1]){
                  return i;
             }
               // find pivot or dropping point
                  
                     if(nums[i]>nums[i+1]){
                        pivot=i+1;
                        cout<<"Pivot"<<i;
                        break;
                     
                     }

         }
         if(target==nums[pivot]){
             return pivot;
         }
         else if(target<nums[pivot]){
             return -1;
         }
         else {
            int a=0;
            int b=pivot-1;
            int c=pivot+1;
            int d=n-1;
                     // loop while
                        while(a<b){
                                int md1=(a+b)/2;
                                if(nums[md1]==target){
                                     return md1;
                                }
                                else if(target>nums[md1]){
                                        a=md1+1;
                                }
                                else{
                                    b=md1-1;
                                }
                        }
                        while(c<d){
                                int md2=(c+d)/2;
                                if(nums[md2]==target){
                                     return md2;
                                }
                                else if(target>nums[md2]){
                                        c=md2+1;
                                }
                                else{
                                    d=md2-1;
                                }
                        }
                        
         }
         
    
}
int main(){
  vector<int> nums={1,2,3,4,5};
  int target=2;
  int index=find(nums,target);
  cout<<index;


    return 0;
}