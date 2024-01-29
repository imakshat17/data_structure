#include<iostream>
using namespace std;
void merge(int arr[], int s, int e){
      int mid=(s+e)/2;
         int len1=mid-s+1;
         int len2=e-mid;
            // create two dynamic array
            int *arr1=new int[len1];
            int *arr2=new int[len2];
                  // start copying for aar1
                      int k=s;
                        for(int i=0;i<len1;i++){
                                arr1[i]=arr[k];                               
                                k++;
                        }    
                        // start copying for aar2
                         k=mid+1;
                        for(int i=0;i<len2;i++){
                                arr2[i]=arr[k];
                                k++;
                        } 
                  // Now start comparing the value of two dynamic created array and start merging into single array
                  int leftIndex=0;
                  int rightIndex=0;
                  int mainIndex=s;

               while(leftIndex<len1 && rightIndex<len2){
                   if(arr1[leftIndex]<arr2[rightIndex]){
                             arr[mainIndex++]=arr1[leftIndex++];
                   }
                   else{
                          arr[mainIndex++]=arr2[rightIndex++];  
                   }
               }
               //  Remaining left value mainly copy don't compare
                  
            while(leftIndex<len1){
                    arr[mainIndex++]=arr1[leftIndex++];
            }

              while(rightIndex<len2){
                    arr[mainIndex++]=arr2[rightIndex++];
            }
          
             delete[] arr1;
             delete[] arr2;


}
void mergeSort(int arr[], int s ,int e){

    // base condition
            if(s>=e){
                return;
            }
        // Find mid value
            int mid=(s+e)/2;

        // divide the array into right and left part
            mergeSort(arr,s,mid);
            mergeSort(arr,mid+1,e);

            /// Now compare and merge
            merge(arr,s,e);

}
int main(){
    int arr[]={2,1,4,2,0,9,4,8,7};
    int s=0;
    int e=8;
    mergeSort(arr,s,e);
    for(int i=0;i<9;i++){
         cout<<arr[i]<<" ";
    }

     return 0;
}