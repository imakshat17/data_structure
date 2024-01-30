#include<iostream>
#include<stack>
using namespace std;
void sortInsertion(stack<int>&s,int target){
    if(s.empty()){
        s.push(target);
         return;
    }
      if(s.top()>=target){
           s.push(target);
           return;
      }    
      int top=s.top();
      s.pop();
       sortInsertion(s,target);
          
          s.push(top);
}
void SortStack(stack<int> &s){
          if(s.empty()){
             return;
          }
         int top=s.top();
         s.pop();
            SortStack(s);

            sortInsertion(s,top);

}
int main(){
    stack<int>s;
    s.push(3);
    s.push(11);
    s.push(2);
    s.push(30);
    s.push(1);
    SortStack(s);
    while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
    }
    
return 0;
}