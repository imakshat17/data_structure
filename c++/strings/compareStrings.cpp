#include<iostream>
#include<string.h>
using namespace std;
bool compare(string str1,string str2){
         int n=str1.length();
         int m=str2.length();
         if(n!=m){
             return false;
         }
         int i=0,j=0;
         while(i<n){
               if(str1[i]==str2[j]){
                  i++;
                  j++;
               }
               else{
                 return false;
               }
         }
         return true;
}
int main(){
    string str1="Subham";
    string str2="Subham";
    cout<<compare(str1,str2);
    
return 0;
}