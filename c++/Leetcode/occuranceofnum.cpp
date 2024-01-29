#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define pb push_back
bool checkOccurance(vector<int>&given){
    sort(given.begin(),given.end());
    int count=1;
       vector<int>temp={};
       for(int i=0;i<given.size();i++){
            if(given[i]==given[i+1]){
                   count++;
                   i++;
            }
            else{
                temp.pb(count);
                count=1;
                 i++;
            }
       }
       for(int i=0;i<temp.size()-1;i++){
               if(temp[i]==temp[i+1]){
                  return false;
               }
               
       }
       return true;
}
int main(){
    vector<int>given={1,1,2,2};
    bool ans;
    ans=checkOccurance(given);
    cout<<ans;
return 0;
}