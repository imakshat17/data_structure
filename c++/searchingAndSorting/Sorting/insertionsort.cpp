#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={4,2,5,1,0};
    int n=arr.size();
    cout<<"Unsorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int round=1;round<n;round++){
             int value=arr[round];
             int j=round-1;
             for(;j>=0;j--){
                   if(arr[j]>value){
                    arr[j+1]=arr[j];
                   }
                   else{
                      break;
                   }
             }
             arr[j+1]=value;
    }
     cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
return 0;
}