#include<iostream>
#include<vector>
using namespace std;
void MergeSorted(vector<int>&nums1,int n,vector<int>&nums2,int m){
    // cout<<"Entered";
    if(n==00 && m!=0){
        nums1 = nums2;
        return;
          
    }
    if(n==0|| m==0){
         return;
    }
        int i=0;
        int j=0;
        while(i<n){
              
                   if(nums1[i]<=nums2[j]){
                    i++;
                   }
                   else{
                     int temp=nums1[i];
                    //  cout<<"VAlue of temp is :-"<<temp;
                     nums1[i]=nums2[j];
                     nums2[j]=temp;
                     i++;
                     j++;
                   }
              
        }
              
                
                  while(j<m){
                      nums1[i]=nums2[j];
                      i++;
                      j++;
                  }
              
         

}
int main(){
   vector<int>nums1={4,5,6,0,0,0};
   vector<int>nums2={1,2,3};
   int n=3;
   int m=3;
   MergeSorted(nums1,n,nums2,m);
   for(int i=0;i<m+n;i++){
    cout<<nums1[i]<<" ";
   }


    return 0;
}
