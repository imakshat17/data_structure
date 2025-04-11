
#include<iostream>

using namespace std;


int main(){
  int x=10;
  int y=23;
  int min;
  int r;
//  find min :- noob way
    if(x<y)min=x;else min=y;

//  find min :-  legend way
    min=x<y?x:y;

//  find min :- ultra legeng way
  cout<<min<<endl;
    r = y ^ ((x ^ y) & -(x < y));
   cout<< r<<endl;
return 0;
}
