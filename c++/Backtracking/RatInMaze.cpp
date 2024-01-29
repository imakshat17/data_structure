#include<iostream>
#include<vector>
using namespace std;
bool isSafe(int i, int j, int row, int col, int maze[][3], vector<vector<bool>>& visited) {
    if ((i >= 0 && i < row) && (j >= 0 && j < col) && maze[i][j] == 1 && visited[i][j] == false) {
        return true;
    } else {
        return false;
    }
}

// void SolveMaze(int maze[][3],int row,int col,int i, int j,vector<vector<bool>>&visited,vector<string>&path,string output){
//     // base condition
//         if(i==row-1 && j==col-1){
//                 path.push_back(output);
//                  return;
//         }
//         // logic
//  // For  Down 
//         if(isSafe(i+1,j,row,col,maze,visited)){
//                 visited[i+1][j]=true;
//                 SolveMaze(maze,row,col,i+1,j,visited,path,output);
//                 visited[i+1][j]=false;
//         }
// // For Right
//            if(isSafe(i,j+1,row,col,maze,visited)){
//                 visited[i][j+1]=true;
//                 SolveMaze(maze,row,col,i,j+1,visited,path,output);
//                 visited[i][j+1]=false;
//         }
// // For Left
//              if(isSafe(i,j-1,row,col,maze,visited)){
//                 visited[i][j-1]=true;
//                 SolveMaze(maze,row,col,i,j-1,visited,path,output);
//                 visited[i][j-1]=false;
//         }
// // For up
//                if(isSafe(i-1,j,row,col,maze,visited)){
//                 visited[i-1][j]=true;
//                 SolveMaze(maze,row,col,i-1,j,visited,path,output);
//                 visited[i-1][j]=false;
//         }
    


// }
void SolveMaze(int maze[][3], int row, int col, int i, int j, vector<vector<bool>>& visited, vector<string>& path, string output) {
    // base condition
    if (i == row - 1 && j == col - 1) {
        path.push_back(output);
        return;
    }

    // logic
    // For Down 
    if (isSafe(i + 1, j, row, col, maze, visited)) {
        visited[i + 1][j] = true;
        SolveMaze(maze, row, col, i + 1, j, visited, path, output + "D");
        visited[i + 1][j] = false;
    }

    // For Right
    if (isSafe(i, j + 1, row, col, maze, visited)) {
        visited[i][j + 1] = true;
        SolveMaze(maze, row, col, i, j + 1, visited, path, output + "R");
        visited[i][j + 1] = false;
    }

    // For Left
    if (isSafe(i, j - 1, row, col, maze, visited)) {
        visited[i][j - 1] = true;
        SolveMaze(maze, row, col, i, j - 1, visited, path, output + "L");
        visited[i][j - 1] = false;
    }

    // For up
    if (isSafe(i - 1, j, row, col, maze, visited)) {
        visited[i - 1][j] = true;
        SolveMaze(maze, row, col, i - 1, j, visited, path, output + "U");
        visited[i - 1][j] = false;
    }
}

int main(){
       int maze[][3]={{1,0,0},
                      {1,1,0},
                      {1,1,1}
                       };
       int row=3;
       int col=3;
     vector<vector<bool>>visited(row,vector<bool>(col,false));
     vector<string>path;
     string output="";
     SolveMaze(maze,row,col,0,0,visited,path,output);

     for (const auto& i : path) {
    cout << i << " ";
}
cout << endl;
return 0;
}