#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool Solve(string &s){
        stack<char>st;
           for(int i=0;i<s.length();i++){
                 char ch=s[i];
                 if(ch=='(' || ch=='{' || ch=='['){
                          st.push(ch);
                 }
                 else{
                      if(!st.empty()){
                              char topChar=st.top();
                               if(ch==')' && topChar=='('){
                                      st.pop();
                               }
                              else if(ch=='}' && topChar=='{'){
                                      st.pop();
                               }
                              else if(ch==']' && topChar=='['){
                                      st.pop();
                               }
                               else{
                                   return false;
                               }
                            
                      }
                      else{
                        return false;

                      }
                 }
           }
           if(!st.empty()){
               return false;
           }
           else{
            return true;
           }
}
int main(){
    string n;
    cin>>n;
    bool ans=Solve(n);
    cout<<ans;
    
return 0;
}