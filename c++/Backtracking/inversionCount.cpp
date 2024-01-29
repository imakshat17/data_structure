#include<iostream>
#include<vector>
using namespace std;
void CountInversion(vector<int> &v, int s, int e, int & count){
           int mid=(s+e)/2;
           int len1=mid-s+1;
           int len2=e-mid;
           int *left=new int[len1];
           int *right=new int[len2];
           int k=s;
               for(int i=0;i<len1;i++){
                                left[i]=v[k];                               
                                k++;
                        }    
                        // start copying for aar2
                         k=mid+1;
                        for(int i=0;i<len2;i++){
                                right[i]=v[k];
                                k++;
                        }
                        int leftIndex=0;
                  int rightIndex=0;
                  int mainIndex=s;

               while(leftIndex<len1 && rightIndex<len2){
                   if(left[leftIndex]<right[rightIndex]){
                             v[mainIndex++]=left[leftIndex++];

                   }
                   else{
                          v[mainIndex++]=right[rightIndex++]; 
                        //   count++; 
                          count += (len1 - leftIndex); 
                   }
               }
               //  Remaining left value mainly copy don't compare
                  
            while(leftIndex<len1){
                // count++;
                    v[mainIndex++]=left[leftIndex++];
                    


            }

              while(rightIndex<len2){
                // count++;
                    v[mainIndex++]=right[rightIndex++];
            }
          
             delete[] left;
             delete[] right;
           
            
}
 void FindInversionCount(vector<int>&v,int s, int e, int &count){
        if(s>=e){
            return;
        }
        int mid=(s+e)/2;
        FindInversionCount(v,s,mid,count);
        FindInversionCount(v,mid+1,e,count);
         CountInversion(v,s,e,count);
    
 }
 
int main(){
    vector<int> v{8, 4, 2, 1};
    int n=v.size();
    int s=0;
    int e=n-1;
    int count=0;
    FindInversionCount(v,s,e,count);
    cout<<count;

    return 0;
}