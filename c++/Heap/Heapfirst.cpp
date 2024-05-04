#include<iostream>
using namespace std;
class Heap{
    public:
      int arr[101];
      int size;
      Heap(){
         size=0;
      }

      void insertion(int value){
           size=size+1;
           int index=size;
           arr[index]=value;
        //    int parentIndex=index/2;
             while(index>1){
                int parentIndex=index/2;
                    if(arr[index]>arr[parentIndex]){
                          swap(arr[index],arr[parentIndex]);
                          index=parentIndex;
                    }
                    else{
                         break;
                    }
             } 
      }
      //   insertion in heap
           
           int deletion(){
               int ans=arr[1];
                // last node to the root node
                   arr[1]=arr[size];
                   size--;
                   // place root node on its correct position
                       int index=1;
                       while(index<size){
                               int left=2*index;
                               int right=2*index+1;
                               int largest=index;
                               if(left<size && arr[left]>arr[largest]){
                                   largest=left;
                               }
                               if(right<size && arr[right]>arr[largest]){
                                  largest=right;
                               }
                               if(largest==index){
                                 break;
                               }
                               else{
                                    swap(arr[largest],arr[index]);
                                    index=largest;
                               }
                       }
                       return ans;
           }


};
int main(){
    Heap h;
    h.arr[0]=-1;
    h.arr[1]=100;
    h.arr[2]=50;
    h.arr[3]=60;
    h.arr[4]=40;
    h.arr[5]=45;
    h.size=5;
cout<<"Heap before insertion"<<endl;
   for(int i=0;i<=h.size;i++){
      cout<<h.arr[i]<<" "; 
   }
   cout<<endl;
   cout<<"Heap after insertion"<<endl;
   h.insertion(110);
   for(int i=0;i<=h.size;i++){
      cout<<h.arr[i]<<" "; 
   }
   cout<<endl;
   int deleteNum=h.deletion();
   cout<<deleteNum<<" Get deleted"<<endl;
   cout<<"Heap after deletion"<<endl;
   for(int i=0;i<=h.size;i++){
      cout<<h.arr[i]<<" "; 
   }
   


    


      return 0;
}