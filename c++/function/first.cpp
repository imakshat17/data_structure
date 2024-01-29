#include<iostream>
using namespace std;
int sum(int a, int b){
    a=++a;
    b=++b;
    int sum=a+b;
    return sum;
}
int main(){
  int a=4;
  int b=5;
  int summ;
  summ=a+b;
  int summation;
  summation=sum(a,b);
  cout<<summ<<endl;
  cout<<summation;
return 0;
}