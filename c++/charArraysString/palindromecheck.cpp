#include<iostream>
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
bool checkpalindrome(char name[20]){
         int i=0;
         int n=getlength(name);
         int j=n-1;
         while(i<=j){
              if(name[i]!=name[j]){
                 return false;
              }
              else{
                   i++;
                   j--;
              }
         }
         return true;
}
int main(){
    char name[20];
    cin>>name;
    cout<<"Check Palindrome "<<checkpalindrome(name);
    
return 0;
}