#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
string Solve(string s){
      string ans;
      int frq[26]={0};
      queue<char>q;

        for(int i=0;i<s.length();i++){
                  char ch=s[i];
                   frq[ch-'a']++;
                    q.push(ch);

                         while(!q.empty()){
                                  if(frq[q.front()-'a']>1){
                                              q.pop();
                                  }
                                  else{
                                        ans.push_back(q.front());
                                        break;
                                  }
                         }
                         if(q.empty()){
                              ans.push_back('#');
                         }
        }
        return ans;
}
int main(){
 string s;
 cin>>s;
   cout<<"Ans:-"<<Solve(s);

    
return 0;
}