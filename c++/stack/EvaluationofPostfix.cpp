#include<iostream>
#include<string>
#include<stack>
using namespace std;
int Evaluate(string s){
    int a,b;
    stack<char> st;
          for(int i=0;i<s.length();i++){
                int cur=s[i];
                 if(cur=='1' || cur=='2' || cur=='3' || cur=='4' || cur=='5' || cur=='6' || cur=='7' || cur=='8' || cur=='9' ||cur=='0')
                 {
                    st.push(cur-'0');
                 }
                 else{
                     a=st.top();
                     st.pop();
                    b=st.top();
                        if(cur=='+'){
                            st.push(a+b);
                        }
                        else if(cur=='-'){
                            st.push(a-b);
                        }
                        else if(cur=='*'){
                              st.push(a*b);
                        }
                        else if(cur=='/'){
                             st.push(b/a);
                        }
                 }
          }
          return st.top();
}
int main(){
    string s;
    cin>>s;
    int ans= Evaluate(s);
    cout<<ans;
    
return 0;
}