#include<iostream>
using namespace std;
int main(){
char ch[100];
cin>>ch;
int c=0;
int i=0;
while(ch[i]!='\0'){
      i++;
      c++;
}
cout<<c;
return 0;
}