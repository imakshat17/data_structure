#include<iostream>
#include<vector>
#include<queue>
using namespace std;
 class info{
     public:
        int value;
        int row;
        int col; 

    info(int val,int r, int c){
            value=val;
            row=r;
            col=c;
    }   
 };
 class compare{
     public:
         bool operator()(info*a,info*b){
              return a->value>b->value;
         }
 };
   vector<int>MergeK(int arr[][3],int n, int k){
              priority_queue<info*,vector<info*>,compare> minHeap;
              for(int i=0;i<k;i++){
                info* temp=new info(arr[i][0],i,0);
                    minHeap.push(temp);
              }
              vector<int>ans;
              while(!minHeap.empty()){
                      info* temp=minHeap.top();
                      int Topelement=temp->value;
                      int Row=temp->row;
                      int Col=temp->col;
                      minHeap.pop();
                      ans.push_back(Topelement);
                      if(Col+1<n){
                           info* newInfo=new info(arr[Row][Col+1],Row,Col+1);
                           minHeap.push(newInfo);
                      }
              }
              return ans;
   }

int main(){
    int arr[][3]={{1,2,3},{11,12,19},{32,65,72}};
    int n=3;
    int k=3;
    vector<int>ans=MergeK(arr,n,k);
    for(auto i:ans){
          cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}