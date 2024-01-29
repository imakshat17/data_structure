#include<iostream>
using namespace std;
class Stack{
    public:
    int*arr;
    int top;
    int size;
      Stack(int size){
          arr=new int[size];
          this->size=size;
           this->top=-1;
      }

      // insertion
            void push(int data){
                   if(size-top>1){
                         top++;
                         arr[top]=data;
                   }
                   else{
                     cout<<"OVERFLOW";
                   }
            }
            void pop(){
                  if(top==-1){
                      cout<<"UNDERFLOW";
                  }
                  else{
                     top--;
                  }
            }
            int getLength(){
                 return top+1;
            }
            int getTop(){
                  if(top==-1){
                    cout<<"Stack is empty";

                  }
                  else{
                    return arr[top];
                  }
            }
            bool isEmpty(){
                  if(top==-1){
                     return true;
                  }
                  else{
                    return false;
                  }
            }
            
};
int main(){
    Stack s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(7);
   while(!s.isEmpty()){
      cout<<s.getTop()<<" ";
       s.pop();
   }
return 0;
}