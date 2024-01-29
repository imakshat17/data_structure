#include<iostream>
#include<string.h>
using namespace std;
int getlength(char name[20]){
       int length=0;
       int i=0;
       while(name[i]!='\0'){
              length++;
              i++;
       }
       return length;
}
void reverse(char name[20]){
      int i=0;
      int n=getlength(name);
      int j=n-1;
      while(i<=j){
         swap(name[i],name[j]);
         j--;
         i++;
      }
    
}
int main(){
    char name[20];
    cin>>name;
    cout<<"original Name:"<<name<<"\n";
    reverse(name);
      cout<<"After reversing Name:"<<name;

return 0;
}