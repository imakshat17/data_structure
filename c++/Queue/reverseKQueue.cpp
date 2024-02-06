#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void ReverseK(queue<int> &q,int k){
         int n=q.size();
         if(k<=0 || k>n){
             return;
         }
         stack<int> st;
         int count=0;
         while(!q.empty()){
               int val=q.front();
               st.push(val);
               q.pop();
               count++;
                 if(count==k){
                      break;
                 }     
         }
         while(!st.empty()){
              int val=st.top();
              q.push(val);
              st.pop();
         }
          int x=0;
         while(!q.empty() && n-k!=0){
               int val=q.front();
               q.push(val);
               q.pop();
               x++;
                  if(x==n-k){
                     break;
                  }
         }
}
void printQueue(queue<int> &q){
      while(!q.empty()){
         cout<<q.front()<<" ";
         q.pop();
      }
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
            // printQueue(q);
    ReverseK(q,0);
    printQueue(q);
return 0;
}