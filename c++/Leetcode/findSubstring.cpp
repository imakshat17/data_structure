#include<iostream>
#include<string.h>
using namespace std;
int FindLengthOfString(string s,string str){
        int left=0;
        int maxLength=0;
        for(int right=0;right<s.length();right++){
                if(s.find(str[right])==string::npos){
                      str.push_back(s[right]);
                 maxLength=max(maxLength,right-left+1);
                }
                else{
                    while(str.find(s[right])!=string::npos){
                          str.pop_back();
                          left++;
                    }
                    str.push_back(s[right]);
                }
        }      
}
int main(){
    string s;
    cin>>s;
    string str="";
    int length=FindLengthOfString(s,str);  
return 0;
}