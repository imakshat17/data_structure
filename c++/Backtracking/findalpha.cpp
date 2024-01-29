#include<iostream>
#include<limits.h>
#include<cstring>
using namespace std;
int getAlpha(char name[],int n, int i,char f){
        if(i>=n){
             return -1;
        }
        if(name[i]==f){
             return i;
        }
        getAlpha(name,n,i+1,f);
}
int main(){
  char name[]="Akshat";
  int n=strlen(name);
  char f='s';
  int i=0;
  int at=getAlpha(name,n,i,f);
  cout<<"At"<<" "<<at;



 

    return 0;
}