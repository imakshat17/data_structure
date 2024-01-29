#include<iostream>
#include<vector>
using namespace std;
int main(){
int arr[]={1,2,3,4,5};
int sizeArr=5;
int brr[]={2,3,4,2,6,7};
int sizeBrr=6;
vector<int>ans;
for(int i=0;i<sizeArr;i++){
     for(int j=0;j<sizeBrr;j++){
        if(arr[i]==brr[j]){
            brr[j]=INT16_MIN;
        }
     }
}
for(int i=0;i<sizeArr;i++){
      ans.push_back(arr[i]);
}
for(int j=0;j<sizeBrr;j++){
    //   ans.push_back(arr[j]);
    if(brr[j]!=INT16_MIN){
        ans.push_back(brr[j]);
    }
}
for(int k=0;k<ans.size();k++){
        cout<<ans[k];
}




    return 0;
}