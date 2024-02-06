#include<iostream>
#include<queue>
using namespace std;
void InterleaveQueue(queue<int>&q){
      if(q.empty()){
         return;
      }
       int n=q.size();
       int count=0;
         queue<int>q2;
             while(!q.empty()){
                   int val=q.front();
                   q2.push(val);
                   q.pop();
                   count++;
                    if(count==n/2){
                        break;
                    }
             }
             while(!q.empty() && !q2.empty()){
                   int a=q2.front();
                     q.push(a);
                     q2.pop();

                    int b=q.front();
                    q.push(b);
                    q.pop();
             }
             if(n&1){
                int c=q.front();
                   q.push(c);
                       q.pop();
             }
}
void PrintQueue(queue<int>&q){
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
    InterleaveQueue(q);
    PrintQueue(q);
    
return 0;
}