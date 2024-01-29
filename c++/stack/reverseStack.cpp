#include<iostream>
#include<stack>
using namespace std;

void bottom(stack<int> &s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }

    int top=s.top();
    s.pop();
    bottom(s,target);
      
      s.push(top);
}
void Reverse(stack<int>& s){
     if(s.empty()){
           return;
     }
      int target=s.top();
      s.pop();
      Reverse(s);
      bottom(s,target);

}
int main(){
    stack<int>s;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    Reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
return 0;
}