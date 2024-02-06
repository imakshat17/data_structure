#include<iostream>
#include<queue>
using namespace std;
void ReverseQueue(queue<int> &q){
         // base condition
             if(q.empty()){
                 return;
             }

         // logic
         int val=q.front();
         q.pop();

         // recursion call
          ReverseQueue(q);

         // backtracking
          q.push(val);
}

void printQueue(queue<int> &q){
      while(!q.empty()){
         cout<<q.front()<<" ";
         q.pop();
      }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
               ReverseQueue(q);
            printQueue(q);

    
return 0;
}