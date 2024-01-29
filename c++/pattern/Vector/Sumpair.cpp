#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,56,2,5,6,98,12,32,45,6,10,20,43,2,3,4,} ;
    int sizeArr=20;
    int sum=25;
    for(int i=0;i<sizeArr;i++){
        int firstElemnt=arr[i];
        for(int j=i+1;j<sizeArr;j++){
            int secondElement=arr[j];
             for(int k=j+1;k<sizeArr;k++){
                   int ThirdElement=arr[k];
                   if(firstElemnt+secondElement+ThirdElement==sum){
                    cout<<firstElemnt<<","<<secondElement<<","<<ThirdElement;
                    cout<<endl;
                   }
             }
        }
    }
      

       return 0;
}