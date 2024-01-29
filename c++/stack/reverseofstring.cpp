#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
     stack<char>s;
     string name="Akshat";
     for(int i=0;i<name.size();i++){
          s.push(name[i]);
     }
     while(!s.empty()){
         cout<<s.top()<<" ";
         s.pop();
     }
     
return 0;
}