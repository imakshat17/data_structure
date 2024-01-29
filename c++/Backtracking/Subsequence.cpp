#include<iostream>
#include<vector>
using namespace std;
void Subsequence(string str, string output,int i,vector<string> &v){
       // Base condition
         if(i>=str.length()){
            v.push_back(output);
              return;
         }
         // Exclude
         Subsequence(str,output,i+1,v);
         

         //include
         output.push_back(str[i]);
         Subsequence(str,output,i+1,v);

      
}
int main(){
    string str="ABC";
    int i=0;
    string output=" ";
    vector<string>v;
    Subsequence(str,output,i,v);
    cout<<"All subsequnce string:-";
    for(auto value:v){
        cout<<value<<" ";
    }
return 0;
}