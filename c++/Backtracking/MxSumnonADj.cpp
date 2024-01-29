#include<iostream>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;
void rob(vector<int> v, int i, int sum, int &maxi){
       if(i>=v.size()){
          maxi=max(sum,maxi);
          return;
       }
       // for exclusion
       rob(v,i+1,sum,maxi);
       // for inclusion
       rob(v,i+2,sum+v[i],maxi);
}
int main(){
    vector<int> v{2,7,9,3,1};
    int i=0;
    int sum=0;
    int maxi=INT_MIN;
    rob(v,i,sum,maxi);
    cout<<"Maximun money a thief can stole "<<maxi;

    return 0;
}