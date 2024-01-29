#include<iostream>
using namespace std;
int check(string &s){
    int count=0;
    int n=s.length();
        char vowel[]={'a','e','i','o','u','A','E','I','O','U'};
        int m=10;
        for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                    if(s[i]==vowel[j]){
                        count=count+1;
                    }
              }
        }
        return count;
        
}
bool Split(string &s){
    int i,j=0;
        int n=s.length()-1;
        string a="";
        string b="";
        for(i=0;i<n/2;i++){
              a.push_back(s[i]);
        }
        for(j=i+1;j<n;j++){
               b.push_back(s[j]);
        }
        int A=check(a);
        int B=check(b);
        if(A==B){
            return true;
        }
        else{
            return false;
        }
}
int main(){
    bool ans;
    string input="";
    cin>>input;
    ans=Split(input);
    if(ans==true){
          cout<<"Alike";
          
    }
    else{
        cout<<"like";
    }


return 0;
}