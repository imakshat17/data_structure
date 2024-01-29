#include<iostream>
#include<vector>
using namespace std;
int findno(vector<int>v){
    int s=0;
    int e=v.size()-1;
   
    while(s<=e){
         int mid=s+(e-s)/2;
        if(v[mid]!=mid+1 && v[mid-1]==mid){
            return mid+1;
        }
        if(v[mid]==mid+1){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>v{1,2,3,5,6,7,8,9};
    int missingno=findno(v);
    cout<<"Missing numbe is:--";
    cout<<missingno;
return 0;
}