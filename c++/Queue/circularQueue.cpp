#include<iostream>
using namespace std;
class CircularQueue{
    public:
       int*arr;
       int size;
       int front;
       int rear;
           CircularQueue(int size){
             this->size=size;
             arr=new int[size];
              front=-1;
              rear=-1;
           }
           // push function
                  void push(int data){
                         // full condition
                           if(front==0 && rear==size-1){
                              cout<<"Queue is full";
                           }
                           // first element
                                    else if(front==-1 && rear==-1){
                                            front=0;
                                            rear=0;
                                              arr[rear]=data;
                                     }
                                     // circular nature
                                            else if(rear==size-1 && front!=0){
                                                     rear=0;
                                                       arr[rear]=data;
                                                
                                             }
                                             // default condition
                                        else{
                                            rear++;
                                             arr[rear]=data;
                                        }                  
                  }

            // pop function
               void pop(){
                             if(front==-1 && rear==-1){
                                    cout<<"queue is empty";
                             }
                             else if(front==rear && front!=-1){
                                   arr[front]=-1;
                                   front=-1;
                                   rear=-1;

                             }
                             else if(front==size-1){
                                 front=0;
                             }
                             else{
                                 front++;
                             }
               }


};
int main(){
    
return 0;
}