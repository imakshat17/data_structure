#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;
 int maxArea(vector<int>&height) {
    int left=0;
    int right=height.size()-1;
    int maximum=INT_MIN;
    while(left<right){
           int ans=min(height[left],height[right])*(right-left);
           int maxArea=max(ans,maximum);
           maximum=maxArea;
           if(height[left]<height[right]){
                  left++;
           }
           else{
            right--;
           }
    }
    return maximum;
    }
int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    int ans=maxArea(height);
    cout<<ans;

    
return 0;
}