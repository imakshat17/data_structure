#include<iostream>
using namespace std;
void getAllDigit(int x,int i){
    // int i=0;
      if(x==0){
         return;
      }
      

      getAllDigit(x/10,--i);
      x=x%10;
      cout<<"Digits at "<<i<<" is "<<x<<endl;
      
      
}
int main(){
   int x=647;
   int i=3;
   getAllDigit(x,i);

     return 0;
}