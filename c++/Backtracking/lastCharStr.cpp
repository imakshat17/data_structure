#include<iostream>
#include<string.h>
using namespace std;
  void findChar(string str,char x,int i){
          if(i>=str.length()){
            return;
          }
          findChar(str,x,i+1);
          if(str[i]==x){
            cout<<x<<" "<<"found at: "<<i<<endl;
          }
  }
int main(){
     string str="abeddefg";
     char x='d';
     int i=0;
     findChar(str,x,i);


     return 0;
}