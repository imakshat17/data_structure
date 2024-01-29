#include<iostream>
#include<vector>
using namespace std;
int Findpivot(vector<int>v){
      int s=0;
      int e=v.size()-1;
      while(s<e){
        int mid=s+(e-s)/2;
        if(v[mid]>v[mid+1]){
            return mid;
        }
        if(v[mid-1]>v[mid+1]){
            return mid-1;
        }
        if(v[mid]<v[s]){
            e=mid;
        }
        else{
            s=mid+1;
        }
      }
      return -1;

}
int binarysearch(vector<int>v,int s, int e,int target){
    int start=s;
    int end=e;
    while(s<=e){
        int mid=start+(end-start)/2;
        if(v[mid]==target){
            return mid;
        }
        if(target<v[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
    
}
int main(){
    vector<int>v{7,8,9,1,2,3,4,5,6};
    int pivot=Findpivot(v);
    int target=2;
     int index;
     if(target<v[0]){
        index= binarysearch(v,pivot+1,v.size()-1,target);
    }
    else{
         index= binarysearch(v,0,pivot,target);
    }
  
     cout<<"Target is at:--"<<"\n";
     cout<<index;
    
return 0;
}