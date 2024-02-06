#include<iostream>
#include<stack>
#include<queue>
using namespace std;

 void printQueue(queue<int> &q){
     while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
     }
 }
 void reverseQueue(queue<int> &q){
       stack<int> s;
       while(!q.empty()){
         s.push(q.front());
            q.pop();
       }
       while(!s.empty()){
           q.push(s.top());
           s.pop();
       }
 }
int main(){
    queue<int> q;
    q.push(23);
    q.push(24);
    q.push(25);
    q.push(26);
    q.push(27);
    // printQueue(q);
    reverseQueue(q);
    printQueue(q);


    
return 0;
}