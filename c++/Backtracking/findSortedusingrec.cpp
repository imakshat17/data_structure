#include<iostream>
#include<vector>
using namespace std;
bool Find(vector<int>&arr, int &n, int i){
      if(i==n-1){
         return true;
      }
      if(arr[i+1]>=arr[i]){
          Find(arr,n,i+1);
      }
      else{
              return false;
      }
}
int main(){
  vector<int>arr{10,11,12,13,14};
  int n=5;
  int i=0;
  bool ans=Find(arr,n,i);
  cout<<ans;



     return 0;
}
// #include<iostream>
// #include<vector>
// using namespace std;

// bool Find(vector<int>& arr, int n, int i) {
//     if (i == n - 1) {
//         return true;
//     }
//     if (arr[i + 1] >= arr[i]) {
//         return Find(arr, n, i + 1);
//     } else {
//         return false;
//     }
// }

// int main() {
//     vector<int> arr{10, 11, 12, 13, 14};
//     int n = 5;
//     int i = 0;
//     bool ans = Find(arr, n, i);  // Pass the vector and integers by reference
//     cout << ans;

//     return 0;
// }
