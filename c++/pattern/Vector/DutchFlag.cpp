#include<iostream>
#include<vector>
using namespace std;
void View(vector<int>arr){
    for(int i=0;i<arr.size();i++){
              cout<<arr[i]<<" ";
    }
}
int main(){
vector<int>arr={1,0,1,0,0,1,0,1,0,0,1,0,0,0,1,1};
int n=arr.size();
int i=0;
int start=i;
int end=n-1;
while(i<end){

      if(arr[i]==0){
        swap(arr[i],arr[start]);
        i++;
        start++;
      }
      if(arr[i]==1){
        swap(arr[i],arr[end]);
        end--;
      }     
}
View(arr);


return 0;
}