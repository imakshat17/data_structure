#include<iostream>
#include<vector>
using namespace std;
int findpiv(vector<int>v){
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
   while(s<e){
        if(v[mid]>v[mid+1]){
            return mid;
        }
        if(v[mid-1]>v[mid]){
            return mid-1;
        }
        if(v[mid]<v[s]){
           
            e=mid;
        }
        else{
             s=mid+1;
            
        }
        mid=s+(e-s)/2;
   }
   return -1;
}
int main(){
    vector<int>v{3,4,5,6,7,8,9,10,11,12,1,2};
    int piv=findpiv(v);
    cout<<"The pivot element is:";
    cout<<piv;
return 0;
}