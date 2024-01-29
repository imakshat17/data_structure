#include<iostream>
#include<string.h>
using namespace std;
bool FindPlani(string str, int s, int e){
         if(s>=e){
             return true;
         }
         if(str[s]!=str[e]){
             return false;
              
         }
        
         return FindPlani(str,s+1,e-1);
}
int main(){
    string str;
    cin>>str;
    int s=0;
    int e=str.length()-1;
    bool ans=FindPlani(str,s,e);
    cout<<ans;

    return 0;
}