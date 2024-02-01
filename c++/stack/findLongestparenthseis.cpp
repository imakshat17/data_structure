#include<iostream>
#include<string>
#include<stack>
using namespace std;
int Find(string &st){
    stack<int>s;
    int MaxVal=0;
    s.push(-1);
        for(int i=0;i<st.length();i++){
               if(st[i]=='('){
                 s.push(i);
               }
               else{
                   s.pop();
                   if(s.empty()){
                        s.push(i);
                   }
                   else{
                    int length=i-s.top();
                     MaxVal=max(length,MaxVal);
                   }
               }

        } 
        return MaxVal;
}

int main(){
    
    string s;
    cin>>s;
    int ans=Find(s);
    cout<<ans<<" ";
return 0;
}