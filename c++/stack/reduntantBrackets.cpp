#include<iostream>
#include<stack>
#include<algorithm>
#include<unordered_map>
using namespace std;
bool Solve(stack<char> &s,unordered_map<char,bool> &flag){
      bool result=false;
      char top=s.top();
      if (top == '+' || top == '-' || top == '*' || top == '/')
{
        s.pop();
          flag[top]=true;
         result= Solve(s,flag);
      }
     else  if (top == 'a' || top == 'b')
{
        s.pop();
        result= Solve(s,flag);
      }
      else if(top=='('){
          if(flag.empty()){
               return true;
          }
      else{   auto it=find_if(flag.begin(),flag.end(),[](const auto&pair){
            return pair.second;
          });
          if(it!=flag.end()){
              bool trueValue=it->second;
              if(trueValue){
                s.pop();
                 it->second=false;
                 result=Solve(s,flag);
                
              }
          }
          else{
            result= true;
          }
      }
      }
     return result;
}
  void Check(stack<char> &s,string &str){
    bool ans;
    unordered_map<char,bool>flag;
        for(int i=0;i<str.length();i++){
             char ch=str[i];
             if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == 'a' || ch == 'b')
{
                s.push(ch);
                if(ch=='+'|| ch=='-'||ch=='*'||ch=='/'){
                    flag[ch]=false;
                }
                 
              
             }
        if(ch==')'){
             ans= Solve(s,flag);
        }
        }
        cout<<ans;

     
  }
int main(){
    stack<char> s;
    string str="a+b";
    Check(s,str);
   
return 0;
}