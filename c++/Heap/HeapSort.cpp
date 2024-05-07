#include<iostream>
using namespace std;
void Heapify(int arr[],int n, int i){
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
            if(largest!=index){
                   swap(arr[index],arr[largest]);
                   index=largest;
                   Heapify(arr,n,index);
            }
            else{
                return ;
            }
}
void BuildHeap(int arr[], int n){
        for(int i=n/2;i>0;i--){
               Heapify(arr,n,i);
        }
}
void HeapSort(int arr[],int n){
       int index=n;
       while(n!=1){
            swap(arr[1],arr[n]);
            n--;
            index--;
        Heapify(arr,n,1);
       }
}
int main(){
    int arr[]={-1,32,12,4,3,22,12,16};
    int n=7;
    BuildHeap(arr,7);
    HeapSort(arr,7);
    for(int i=1;i<=7;i++){
         cout<<arr[i]<<" ";    
    }
    

    return 0;
}