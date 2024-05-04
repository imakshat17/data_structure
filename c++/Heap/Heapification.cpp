#include<iostream>
using namespace std;
void Heapification(int arr[],int n, int i){
         int index=i;
         int leftIndex=2*i;
         int rightIndex=2*i+1;
         int largest=index;
         if(leftIndex<=n && arr[leftIndex]>arr[largest]){
              largest=leftIndex;
         }
         if(rightIndex<=n && arr[rightIndex]>arr[largest]){
               largest=rightIndex;
         }
         if(index!=largest){
               swap(arr[largest],arr[index]);
               index=largest;
               Heapification(arr,n,index);
         }
         else{
            return;
         }
}
void buildHeap(int arr[],int n){
     for(int i=n/2;i>0;i--){
            Heapification(arr,n,i);
     }
}
int main(){

int arr[]={-1,12,50,60,30,40,52};
int n=6;
buildHeap(arr,6);
cout<<"After heapification we get"<<endl;
for(int i=0;i<=n;i++){
      cout<<arr[i]<<" ";
}

    return 0;
}