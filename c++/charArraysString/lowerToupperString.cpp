#include<iostream>
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
 void convertToUpper(char name[100]){
     int n=getlength(name);
       for(int i=0;i<n;i++){
         if(name[i]>='a' && name[i]<='z' && name[i]!=' ')
                {  name[i]=name[i]-'a'+'A';}
       }   
 }
int main(){
    char name[100];
    cin.getline(name,100);
    cout<<name<<"\n";
    convertToUpper(name);
    cout<<name;
return 0;
}