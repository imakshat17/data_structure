#include<iostream>
#include<vector>
using namespace std;
int firstOC(vector<int>v,int target){
    int s=0;
    int e=v.size()-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(v[mid]==target){
          ans=mid;
          e=mid-1;
        }
        else if(target>v[mid]){
                s=mid+1;
        }
        else if(target<v[mid]){
              e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int>v{1,2,3,4,5,6,8,8,8,8,8,8,};
    int target=8;
    int firstOccurence=firstOC(v,target);
    cout<<"The target is found at index:--";
    cout<<firstOccurence;
return 0;
}