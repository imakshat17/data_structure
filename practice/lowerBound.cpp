#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FindLowerBound(vector<int>&array,int target){
     int ans;
      int i=0;
      int j=array.size()-1;
      while(i<=j){
            int mid=(j+i)/2;
            if(array[mid]>target){
                ans=mid;
                 j=mid-1;
            }
            else{
                  i=mid+1;
            }

      }    
      return ans;      
}
int main(){
  vector<int>array={6,43,1,4,5,3,23,0};
  sort(array.begin(),array.end());
    int x=4;
    int ans=FindLowerBound(array,x);
    cout<<array[ans];
      return 0;
}