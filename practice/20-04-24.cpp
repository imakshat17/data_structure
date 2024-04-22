
#include<vector>
// class Solution {
// public:
// bool IsValid(int i, int j, int n, int m, vector<vector<char>>& grid) {
//     if (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == '1') {
//         return true;
//     }
//     return false;
// }

// void numsIslandRec(int i,int j,int n, int m ,vector<vector<char>>& grid){
//         grid[i][j]='0';
//         if(Isvalid(i+1,j,n,m,grid)){
//              numsIslandRec(i+1,j,n,m,grid);
//         }
//         if(Isvalid(i-1,j,n,m,grid)){
//              numsIslandRec(i+1,j,n,m,grid);
//         }
//         if(Isvalid(i,j+1,n,m,grid)){
//              numsIslandRec(i+1,j,n,m,grid);
//         }
//          if(Isvalid(i,j-1,n,m,grid)){
//              numsIslandRec(i+1,j,n,m,grid);
//         }
        
// }
// void numsIslandRec(int i, int j, int n, int m, vector<vector<char>>& grid) {
//     grid[i][j] = '0';
//     if (IsValid(i + 1, j, n, m, grid)) {
//         numsIslandRec(i + 1, j, n, m, grid);
//     }
//     if (IsValid(i - 1, j, n, m, grid)) {
//         numsIslandRec(i - 1, j, n, m, grid);
//     }
//     if (IsValid(i, j + 1, n, m, grid)) {
//         numsIslandRec(i, j + 1, n, m, grid);
//     }
//     if (IsValid(i, j - 1, n, m, grid)) {
//         numsIslandRec(i, j - 1, n, m, grid);
//     }
// }

//     int numIslands(vector<vector<char>>& grid) {
//             int n=grid.size();
//             int m =grid[0].size();
//             int ans=0;
//              for(int i=0;i<n;i++){
//                     for(int j=0;j<m;j++){
//                            if(grid[i][j]=='1'){
//                                 ans++;
//                                 numsIslandRec(i,j,n,m,grid);
//                            }
//                     }
//              }
//         return ans;
//     }
// };