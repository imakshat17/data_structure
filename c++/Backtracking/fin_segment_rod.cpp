#include <iostream>
#include <algorithm> 
#include <climits>
using namespace std;
int solve(int n, int x, int y, int z) {
    if (n == 0) {
        return 0;
    }
    if (n < 0) {
        return INT_MIN; 
    }
    int ans1 = solve(n - x, x, y, z) + 1;
    int ans2 = solve(n - y, x, y, z) + 1;
    int ans3 = solve(n - z, x, y, z) + 1;
    int ans = max({ans1, ans2, ans3}); 
    return ans;
}

int main() {
    int n = 10, x = 2, y = 3, z = 4;
    cout << "Maximum steps: " << solve(n, x, y, z) << endl;
    return 0;
}
