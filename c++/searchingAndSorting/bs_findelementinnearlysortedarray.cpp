#include<iostream>
#include<vector>
using namespace std;
int findans(vector<int>v,int target){
     int s=0;
     int e=v.size()-1;
     while(s<=e){
        int mid=s+(e-s)/2;
        if(v[mid]==target){
            return mid;
        }
        if(v[mid-1]>0 && v[mid-1]==target){
              return mid-2;
        }
        if(v[mid+1]<=v.size()-1 && v[mid+1]==target){
              return mid+2;
        }
        if(target>v[mid]){
             s=mid+1;
        }
        else{
            e=mid-1;
        }
     }    
     return -1;
}

int main(){
    vector<int>v={3,10,20,40,50,70,80};
    int target=70;
    int answer=findans(v,target);
    cout<<"target found at index ";
    cout<<answer;
    
return 0;
}