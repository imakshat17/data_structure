#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
void reverse(char name[100]){
      int c=0;
      int i=0;
      while(name[i]!='\0'){
         i++;
         c++;
      }
    int j=0;
    int k=c-1;
    while(j<=k){
        swap(name[j],name[k]);
        j++;
        k--; 
    }

}
int main(){
    char name [100];
     cin>>name;
     reverse(name);
     cout<<name;
    
return 0;
}