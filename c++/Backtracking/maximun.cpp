#include<iostream>
#include<limits.h>
using namespace std;
void getMax(int arr[],int n,int i,int &MAX){
       if(i>n){
         return;
       }
       if(arr[i]>MAX){
        MAX=arr[i];
       }
       getMax(arr,n,i+1,MAX);

}
int main(){
    int i=0;
int arr[]={10,21,30,2,1,34};
int n=6;
int maxi=INT_MIN;
 getMax(arr,n,i,maxi);
 cout<<"Maximum number is:"<<maxi;

     return 0;
}