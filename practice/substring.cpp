#include<iostream>
#include<vector>
using namespace std;
vector<string>ans;
   void find(string &abs,int i, string &temp){
           if(i>=abs.length()){
               ans.push_back(temp);
                return;
           }
             temp.push_back(abs[i]);
             find(abs,i+1,temp);
             temp.pop_back();
             find(abs,i+1,temp);
   }

 int main(){
       string abs="Akshat";
        string temp;
        find(abs,0,temp);
        for(string st:ans){
              cout<<st<<" ";
                      }
       return 0;
 }