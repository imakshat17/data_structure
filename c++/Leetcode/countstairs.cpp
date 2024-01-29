#include<iostream>
#include<vector>
using namespace std;
void FindAns(int n, int &count){
    // int m=arr.size();
         if(n==0){
            count++;
             return;
         }
         if(n<0){
            return;
         }
           vector<int>arr={1,2};
           int m=arr.size();
         for(int i=0;i<m;i++){
                 FindAns(n-arr[i],count); 
         }
    


}
int climbstairs(int n){
     int count=0;
    //  int arr[]={1,2};
    
     FindAns(n,count);
     return count;
}

int main(){
    int n;
    cin>>n;
    int ans=climbstairs(n);
    cout<<ans;

return 0;
}