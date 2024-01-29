#include<iostream>
#include<vector>
using namespace std;
int findpeak(vector<int>v){
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(v[mid]<v[mid+1]){
                s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    vector<int>v{1,2,3,4,10,9,8,3};
    int index=findpeak(v);
    cout<<"Peak element is at:--";
    cout<<index;

return 0;
}