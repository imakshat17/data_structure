#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
bool uniqueOccurrences(vector<int>& arr){
     unordered_map<int,int>mymap;
     // intialisation of map
     for(int i=0;i<arr.size();i++){
          mymap[arr[i]]++;
     }
     //logic for map
     unordered_set<int>occurrencesSet;
        for(auto it=mymap.begin();it!=mymap.end(); ++it){
              if(!occurrencesSet.insert(it->second).second){
                   return false;
              }
        }
        return true;

}
int main(){
    // int arr[]={1,2,2,1,1,3};
    vector<int>v={1,2,2,1};
   bool ans= uniqueOccurrences(v);
   cout<<ans;
   

return 0;
}