#include<iostream>
using namespace std;
void FindPermutation(string &str,int i){
    // base condition
            if(i>=str.length()){
                 cout<<str<<" ";
                 return;
            }
            // logic
                for(int j=i;j<str.length();j++){
                          swap(str[i],str[j]);
                             FindPermutation(str,i+1);
                             swap(str[i],str[j]);
                }

}
int main(){
    string str="abc";
    int i=0;
    FindPermutation(str,i);

return 0;
}