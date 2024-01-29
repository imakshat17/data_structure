#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s,int target){
         if(s.empty()){
                 s.push(target);
                 return;
         }
           
           int topElement=s.top();
           s.pop();
           // recussion
              solve(s,target);
                  // push it again same element
                     s.push(topElement);
}
void Intermediate(stack<int> &s){
       if(s.empty()){
         cout<<"Empty stack!!!"<<endl;
         return;
       }
         int target=s.top();
         s.pop();
         solve(s,target);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    Intermediate(s);
    while(!s.empty()){
         cout<<s.top()<<" ";
         s.pop();
    }
return 0;
}