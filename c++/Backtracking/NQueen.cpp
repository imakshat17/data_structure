#include<iostream>
#include<vector>
using namespace std;
bool isSafe(vector<vector<char>>&table,int row,int col,int n){
    int i=row;
    int j=col;
     // for horizontal case
          while(j>=0){
              if(table[i][j]=='Q'){
                  return false;
              }
              j--;
          }
           i=row;
          j=col;
          // for upward diagonal
           while(j>=0 && i>=0){
              if(table[i][j]=='Q'){
                  return false;
              }
              j--;
              i--;
          }
           i=row;
            j=col;
          // for downward diagonal
            while(j>=0 && i<n){
              if(table[i][j]=='Q'){
                  return false;
              }
              j--;
              i++;
          }

          return true;
             

}
void PrintQueen(vector<vector<char>>&table,int n){
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
          cout<<table[i][j]<<" ";
    }
     cout<<endl;
   }
   cout<<endl;
     
  }
 void SolveQueen( vector<vector<char>>&table,int col,int n){
    // base condtiton
         if(col>=n){
         PrintQueen(table,n);
         return;
         }
         // logic
          for(int row=0;row<n;row++){
               if(isSafe(table,row,col,n)){
                    table[row][col]='Q';
                    SolveQueen(table,col+1,n);
                    // backracking
                     table[row][col]='-';
               }
          }


 }
int main(){
    int n=4;
    vector<vector<char>>table(n,vector<char>(n,'-'));
    int col=0;
    SolveQueen(table,col,n);

    return 0;
}