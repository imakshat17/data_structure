#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={5,4,3,2,1};
    cout<<"Unsorted Array:="<<"\n";
       int n=arr.size();
    for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
    }
 
    for(int i=0;i<n-1;i++){
          int minindex=i;
          for(int j=i+1;j<n;j++){
              if(arr[j]<arr[minindex]){
                   minindex=j;
              }
          }
          swap(arr[i],arr[minindex]);
    }
    cout<<"\n"<<"Sorted Array is:="<<"\n";
    for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
    }
 

    
return 0;
}