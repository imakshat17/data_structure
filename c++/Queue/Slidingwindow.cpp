#include<iostream>
#include<deque>
using namespace std;
void FindNegative(int *arr,int n, int k){
        deque<int>q;
        for(int i=0;i<k;i++){
             if(arr[i]<0){
                q.push_back(i);
             }
        }
        for(int i=k;i<n;i++){
             if(q.empty()){
                cout<<0<<" ";
             }
             else{
                  cout<<arr[q.front()]<<" ";
             }

              while((!q.empty()) && (i-q.front()>=k)){
                           q.pop_front();
              }

              if(arr[i]<0){
                q.push_back(i);
              }

        }
        if(q.empty()){
                cout<<0<<" ";
             }
             else{
                  cout<<arr[q.front()]<<" ";
             }
}
int main(){
    int arr[]={-2,1,2,-3,-1,10};
    int n=6;
    int k=3;
    FindNegative(arr,n,k);

    
return 0;
}