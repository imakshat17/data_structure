#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{2,7,11,15};
    vector<int>z;
    int target=9;
    for(int i=0;i<v.size()-1;i++){
             for(int j=i+1;j<v.size();j++){
                  if(v[i]+v[j]==target){
                      z.push_back(i);
                      z.push_back(j);
                  }
             }
    }
    for(auto val :z){
       cout<<val;
    }
return 0;
}