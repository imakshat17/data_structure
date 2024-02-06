#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void nextSmaller(vector<int>&s,vector<int>&ans){
    stack<int>stac;
    stac.push(-1);
          for(int i=s.size()-1;i>=0;i--){
                int val=s[i];
                 while(stac.top()>=val){
                    stac.pop();
                 }

                 ans[i]=stac.top();
                 stac.push(val);
          }
}
int main(){
    vector<int>s;
    s.push_back(5);
    s.push_back(4);
    s.push_back(3);
    s.push_back(1);
     vector<int>ans(s.size());
        nextSmaller(s,ans);
  
 for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
 }

    
return 0;
}