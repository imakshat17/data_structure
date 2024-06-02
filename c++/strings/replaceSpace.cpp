#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
void replaceSpace(char name[100]){
      int i=0;
      while(name[i]!='\0'){
           if(name[i]==' '){
              name[i]='@';
           }
           i++;
      }
}
int main(){
    char name[100];
    cout<<"Enter name"<<endl;
    cin.getline(name,100);
    replaceSpace(name);
    cout<<name;

    
return 0;
}