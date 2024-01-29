#include<iostream>
#include<vector>
using namespace std;
int Bs(vector<int>&v, int &key, int start,int end){
             int mid=(start+end)/2;
             if(start>end){
                return -1;
             }
             if(v[mid]==key){
                  return mid;
             }
           return((v[mid]<key)?Bs(v,key,mid+1,end):Bs(v,key,start,mid-1));

}
int main(){
  vector<int>v{1,2,3,4,5,6};
  int key=4;
  int start=0;
  int end=5;
  int ans=Bs(v,key,start,end);
  cout<<ans;


     return 0;
}