#include<iostream>
#include<vector>
using namespace std;
int findfirst(vector<int>v,int target){
 int s=0;
 int e=v.size()-1;
 int mid=s+(e-s)/2;
 int ans=-1;

 while(s<=e){
      if(v[mid]==target){
        ans=mid;
        e=mid-1;
      }
      else if(target>v[mid]){
        s=mid+1;
      }
      else {
        e=mid-1;
      }
       mid=s+(e-s)/2;
 }
 return ans;
}
int findlast(vector<int>v,int target){
     int s=0;
 int e=v.size()-1;
 int mid=s+(e-s)/2;
 int ans=-1;
 while(s<=e){
    if(v[mid]==target){
        ans=mid;
        s=mid+1;
    }
    else if(target>v[mid]){
        s=mid+1;
    }
    else {
        e=mid-1;
    }
     mid=s+(e-s)/2;
 }
 return ans;
      
}
int main(){
    vector<int>v{1,2,2,3,4,5,6};
     int target=2;
     int firstocc=findfirst(v,target);
     int lastocc=findlast(v,target);
     int index=lastocc-firstocc+1;
     cout<<"Number of occurance: ";
     cout<<index;
    
return 0;
}