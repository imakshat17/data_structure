#include<iostream>
#include<limits.h>
using namespace std;
void getMin(int arr[],int n, int i, int &min){
       if(i>=n){
         return;
       }
       if(arr[i]<min){
         min=arr[i];
       }
       getMin(arr,n,i+1,min);
       
}
int main(){
    int arr[]={12,13,1,2,3,-1,23};
    int min=INT_MAX;
    int i=0;
    int n=7;
    getMin(arr,n,i,min);
    cout<<"Smallest number"<<" "<<min;

    return 0;
}