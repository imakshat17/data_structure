#include<iostream>
#include<vector>
using namespace std;
int main(){
    int Row;
    cout<<"Enter Row"<<endl;;
    cin>>Row;

   vector<vector<int>>Triangle;
   for(int i=0;i<Row;i++){
      vector<int>temp(i+1,1);
       if(i>=2){
           for(int j=1;j<i;j++){
               temp[j]=Triangle[i-1][j]+Triangle[i-1][j-1];
           }
       }
       Triangle.push_back(temp);

   }
    for(vector<int>vc:Triangle){
          for(int num:vc){
               cout<<num<<" ";
          }
          cout<<endl;
    }

    return 0;
    
  
}