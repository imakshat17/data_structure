#include<iostream>
#include<string.h>
using namespace std;
int getlength(char name[]){
     int length=0;
     int i=0;
     while(name[i]!='\0'){
           length++;
           i++;
     }
     return length;

}
int main(){
    char name[100];
    // cin>>name;
    cin.getline(name,60);
    cout<<"The length of an name is:--"<<getlength(name);
      cout<<"The length of an name is:--"<<strlen(name);

return 0;
}