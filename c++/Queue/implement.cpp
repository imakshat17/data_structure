#include<iostream>
using namespace std;
class Queue{
     public:
        int *arr;
        int size;
        int front;
        int rear;

    Queue(int size){
          this->size=size;
          arr=new int[size];
          front=0;
          rear=0;
    }

    void push(int data){
          if(rear==size){
              cout<<"Queue is Full";
          }  
          else{
            arr[rear]=data;
            rear++;
          } 
    }
    void pop(){
         if(front==rear){
              cout<<"Queue is already empty";
         }
         else{
              arr[front]=-1;
              front++;
              if(front==rear){
                  front=0;
                  rear=0;
              }
         }
    }
    int getFront(){
          if(front==rear){
             cout<<"Q is empty"<<endl;
             return -1;
          }
          else{
            return arr[front];
          }
    }
    bool isEmpty(){
         if(front==rear){
            return true;
         }
         else{
            return false;
         }
    }

    int getSize(){
         return rear-front;
    }
    int getBack(){
        return arr[rear];
    }
};
int main(){

    Queue q1(10);
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    q1.push(6);
         
         cout<<"Size of Queue is"<<" "<<q1.getSize()<<endl;
         cout<<"Getting front:-"<<" "<<q1.getFront()<<endl;
         q1.pop();
           cout<<"Getting front:-"<<" "<<q1.getFront()<<endl;
         q1.push(12);
         cout<<"Getting back :="<<" "<<q1.getBack();
         
return 0;
}