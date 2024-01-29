#include<iostream>
using namespace std;
int FindPivot(int arr[],int s, int e){
        int PivotIndex=s;
        int PivotElment=arr[s];
        int count=0;

        for(int i=s+1;i<=e;i++){
             if(arr[i]<=PivotElment){
                count++;
             } 
        }
     swap(arr[s],arr[s+count]);
     PivotIndex=s+count;

     int i=s;
     int j=e;
     while(i<PivotIndex && j>PivotIndex){
          while(arr[i]<=PivotElment){
            i++;
          }
          while(arr[j]>PivotElment){
            j--;
          }
          if(i<PivotIndex && j>PivotIndex){
               swap(arr[i],arr[j]);
          }
     }
  return PivotIndex;

}
void QuickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
         int p=FindPivot(arr,s,e);
         QuickSort(arr,s,p-1);
         QuickSort(arr,p+1,e);
}
int main(){
    int arr[]={3,2,1,0,3,3,4,5,0,3,4,8};
    int n=12;
    int s=0;
    int e=n-1;
    QuickSort(arr,s,e);
    for(int i=0;i<=e;i++){
          cout<<arr[i]<<" ";
    }

    return 0;
}