#include<iostream>
#include<vector>
using namespace std;
int last(vector<int>v,int target){
       int s=0;
       int e=v.size()-1;
       int ans=-1;
       int mid=s+(e-s)/2;
       while(s<=e){
          if(v[mid]==target){
               ans=mid;
                s=mid+1;
          }
          else if(target<v[mid]){
            e=mid-1;
          }
          else if(target>v[mid]){
              s=mid+1;
          }
          mid=s+(e-s)/2;
       }
       return ans;
}
int main(){
    vector<int>v{1,2,2,2,3,3,7,8,8,8,8,8,8,8,8,9};
    int target=8;
    int LastOCCu=last(v,target);
    cout<<"Last occurance of an element in an array:--";
    cout<<LastOCCu;

    
return 0;
}