#include<iostream>
#include<string.h>
#include<algorithm>
bool palindrome(char name[100]){
    int n=strlen(name);
    int j=0;
    int k=n-1;
    while(j<=k){
          if(name[j]==name[k]){
            j++;
            k--;
          }
          else{
            return false;
          }
    }    
    return true;   
}
using namespace std;
int main(){
    char name[100];
    cin>>name;
    cout<<palindrome(name);
    
      
return 0;
}