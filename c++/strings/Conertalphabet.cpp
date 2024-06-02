#include<iostream>
#include<string.h>
using namespace std;
void convert(char name [100]){
       int n=strlen(name);
       for(int i=0;i<n;i++){
            if(name[i]==' '){
                   continue;
            }
            
             name[i]=name[i]-'a'+'A';
       }
}
int main(){
  char name[100];
  cin.getline(name,100);
  convert(name);
  cout<<name;
    
return 0;
}