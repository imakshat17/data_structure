#include<iostream>
#include<vector>
using namespace std;
int FindUnique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
           ans=ans^arr[i];
    }
    return ans;
}
int main(){
       
       cout<<"Enter the size of an array";
       int n;
       cin>>n;
       vector<int>arr(n);
       cout<<"Enter numbers";
       for(int i=0;i<arr.size();i++){
             cin>>arr[i];
       }
       int uniqueNumber=FindUnique(arr);
       cout<<"Unique Number is:";
       cout<<uniqueNumber;


       return 0;
}