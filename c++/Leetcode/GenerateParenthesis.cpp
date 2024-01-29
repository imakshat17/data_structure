#include<iostream>
#include<vector>
using namespace std;
void Solve(vector<string>&ans,int open,int close,string output){
         // base condition
          if(open==0 && close==0){
                 ans.push_back(output);
                 return;
          }
          // include open
                if(open>0){
                        output.push_back('(');
                        Solve(ans,open-1,close,output);
                        // backtracking
                            output.pop_back();
                }
                // include close
                    if(close>open){
                          output.push_back(')');
                            Solve(ans,open,close-1,output);
                            // backtrack
                               output.pop_back();
                    }

}
int main(){
    int n;
    cin>>n;
    vector<string>ans;
    int open=n;
    int close=n;
    string output="";
    Solve(ans,open,close,output);
    for(auto i:ans){
         cout<<i<<" ";
         ;
    }
    

return 0;
}