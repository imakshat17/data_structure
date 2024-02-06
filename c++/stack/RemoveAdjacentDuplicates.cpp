#include<iostream>
#include<string>
#include<stack>
using namespace std;
void ReverseSatck(stack<char> &st){
       if(st.empty()){
        return;
       }
       char val=st.top();
       st.pop();
       ReverseSatck(st);
       cout<<val;
}
void RemoveDuplicates(string &s,int i,stack<char> &st){

        if(i>=s.length()){
            return;
        }
        char val=s[i];
          if(!st.empty()){
               if(val==st.top()){
                  st.pop();
               }
               else{
                st.push(val);
               }
          }
          else{
              st.push(val);
          }
          RemoveDuplicates(s,++i,st);

}
int main(){
    string s;
    stack<char>st;
    cin>>s;
    int i=0;
    RemoveDuplicates(s,i,st);
    ReverseSatck(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();

    }
    
return 0;
}