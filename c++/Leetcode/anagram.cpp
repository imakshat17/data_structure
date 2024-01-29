#include<iostream>
#include<unordered_map>
using namespace std;

int minSteps(string s, string t) {
    unordered_map<char,int>bucket;
    for(auto ch:s){
        bucket[ch]++;
    }
    for(auto ch:t){
          if(bucket.find(ch)!=bucket.end() && bucket[ch]>0){
               bucket[ch]--;
          }
    }
    int step=0;
    for(auto i=bucket.begin();i!=bucket.end();i++){
          step+=i->second;
    }
    return step;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int ans = minSteps(str1, str2);
    cout << ans;

    return 0;
}
