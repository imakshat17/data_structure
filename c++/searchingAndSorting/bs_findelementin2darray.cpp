#include<iostream>
using namespace std;
bool bfm(int arr[][4],int r, int c, int target){
    int s=0;
    int e=(r*c)-1;
    while(s<=e){
          int mid=s+(e-s)/2;
          int rowIndex=mid/c;
          int colIndex=mid%c;
          if(arr[rowIndex][colIndex]==target){
            cout<<"Found in row at "<<rowIndex<<" and col at "<<colIndex<<endl;
                 return true;
          }
          if(arr[rowIndex][colIndex]>target){
            e=mid-1;
          }
          else{
            s=mid+1;
          }
    }
    return false;
}
int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int row=5;
    int col=4;
    int target=5;
    bool ans=bfm(arr,row,col,target);
    if(ans){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
return 0;
}