#include<iostream>
using namespace std;
int max(int a, int b,int c){
    int result=(a>b?(a>c?a:c):(b>c?b:c));
    return result;
}
int main(){
    int a;
     int c;
         int b;
    
  cin>>a;
  cin>>b;
  cin>>c;
  cout<<"The result is:-";
  int result=max(a,b,c);
  cout<<result;

    
return 0;
}