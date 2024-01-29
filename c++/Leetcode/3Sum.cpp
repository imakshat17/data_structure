// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include <set>
// #include<unordered_set>
// using namespace std;
// vector<vector<int>>FindSum(vector<int> &ans){
//     int n=ans.size();
//      set<vector<int>>st;
//        for(int i=0;i<n;i++){
//         set<int>hashset;
//         for(int j=0;j<n;j++){
//             int third=-(ans[i]+ans[j]);
//             //  auto it = hashset.find(third);
//                 if(hashset.find(third)!=hashset.end()){
//                        vector<int>temp={ans[i],ans[j],third};
//                        sort(temp.begin(),temp.end());
//                        st.insert(temp);
//                 }
//                 hashset.insert(ans[j]);
//         }

//        }
//        vector<vector<int>> ret(st.begin(),st.end());
//        return ret;
// }

// int main(){
// vector<int>ans={-1,0,1,2,-1,-4};
// vector<vector<int>>nums={};
// nums=FindSum(ans);
// for (const auto& row : nums) {
//         for (int element : row) {
//             cout << element << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;

vector<vector<int>> FindSum(vector<int> &ans) {
         int n=ans.size();
         vector<vector<int>>temp;
         sort(ans.begin(),ans.end());
         for(int i=0;i<n;i++){
              if(i>0 && ans[i]==ans[i-1]){
                   continue;
              }
              int a=ans[i];
              int t=-a;
              int left=i+1;
              int right=n-1;
              while(left<right){
                     if(ans[left]+ans[right]==t){
                             temp.push_back({ans[i],ans[left],ans[right]});
                             while(left<right && ans[left]==ans[left+1])left++;
                             while(left<right && ans[right]==ans[right-1])right--;
                             left++;
                             right--;
                     }
                     else if(ans[left]+ans[right]>t){
                            right--;
                     }
                     else{
                        left++;
                     }
              }
              while(i+1<n && ans[i+1]==ans[i])i++;
                    
         }
         return temp;
}

int main() {
    vector<int> ans = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> nums = FindSum(ans);

    for (const auto& row : nums) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
