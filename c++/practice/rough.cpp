#include<iostream>
#include<vector>
using namespace std;
int main(){
      vector<vector<int>>height;
      vector<int>add={1,1,2,3};
      height.push_back(add);
      vector<int>subtract={1,2,3,4,5};
      height.push_back(subtract);
       for (const auto& row : height) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

return 0;
}