// #include<iostream>
// #include<string.h>
// #include<limits.h>
// using namespace std;
// void FindString(string str, int maxi,string &str1){
//           for(int i=0;i<str.length()-2;i++){
//                 if(str[i]==str[i+1] && str[i]==str[i+2] && (str[i]-'0')>maxi){
//                       str1[0]=str[i];
//                       str1[1]=str[i+1];
//                       str1[2]=str[i+2];
//                       maxi=(str[i]-'0');
//                 }
           
//           }   
// }
// int main(){
//    string str;
//     cin>> str;
//     int maxi=INT_MIN;
//      string str1;
//      FindString(str,maxi,str1);
//     for(int i=0;i<3;i++){
//           cout<<str1[i];
    
//     }
     
// return 0;
// }
#include <iostream>
#include <string>
#include <limits.h>

using namespace std;

string FindString(string str, int maxi) {
    string maxStr="";
    for (int i = 0; i < str.length() - 2; i++) {
         if (str[i] == str[i + 1] && str[i] == str[i + 2]) {
            int currentNum = stoi(str.substr(i, 3));
            if (currentNum > maxi) {
                maxi = currentNum;
                maxStr = str.substr(i, 3);
            }
        }
    }

    return maxStr;
    }

   
    


int main() {
    string str;
    cin >> str;
    int maxi = INT_MIN;
    string str1 = FindString(str, maxi);

    cout << str1;

    return 0;
}
