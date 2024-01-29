#include<iostream>
using namespace std;
int BinarySearch(int arr[],int s,int e,int target){
      int mid=(s+e)/2;
      // base
      if(arr[mid]==target){
          return mid;
      }
      // logic
        if(target<arr[mid]){
             BinarySearch(arr,s,mid-1,target);
        }
        else{
            BinarySearch(arr,mid+1,e,target);
        }
}
int main(){
    int arr[5]={3,21,22,4,6};
    int n=5;
    int s=0;
    int e=n-1;
    int target=21;
    int index=BinarySearch(arr,s,e,target);
    cout<<index;



return 0;
}