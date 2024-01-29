#include<iostream>
#include<stack>
using namespace std;
void getMiddle(stack<int> &s,int &Totalsize){
        if(s.size()==Totalsize/2+1){
             cout<<"Middle : "<<s.top()<<endl;
             return; 
        }
        //
        int temp=s.top();
        s.pop();
        // recursiion
           getMiddle(s,Totalsize);
        // backtrack
            s.push(temp); 
           
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    int size=s.size();
    getMiddle(s,size);
return 0;
}