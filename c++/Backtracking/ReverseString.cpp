#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
void Reverse(string str,int i, string &output){
           if(i>=str.length()){
              return;
           }
           Reverse(str,i+1,output);
           output.push_back(str[i]);
}
int main(){
    string str="Sonu";
    int i=0;
    string output="";
    Reverse(str,i,output);
     cout<<output;
    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// void Reverse(string str, int i, string &output) {
//     if (i >= str.length()) {
//         return;
//     }
//     Reverse(str, i + 1, output);
//     output.push_back(str[i]);
// }

// int main() {
//     string str = "Rahul";
//     int i = 0;
//     string output = "";
//     Reverse(str, i, output);

//     // Add this line to print the reversed string
//     cout << "Reversed string: " << output << endl;

//     return 0;
// }
