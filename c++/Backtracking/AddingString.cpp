#include<iostream>
#include<string.h>
using namespace std;
void FindSum(string &str1,int ptr1, string &str2, int ptr2,int carry, string &ans){
         //  Base condition
             if(ptr1<0 && ptr2<0){
                   if(carry!=0){
                    return ans.push_back(1+'0');
                   }
                   else{
                         return;
                   }
             }
        FindSum(str1,ptr1-1,str2,ptr2-1,carry,ans);
        int ans1=(ptr1>=0?str1[ptr1]:'0')-'0';
        int ans2=(ptr2>=0?str2[ptr2]:'0')-'0';
        int sum=ans1+ans2+carry;
        int digit=sum%10;
        carry=sum/10;
        ans.push_back(digit+'0');
            // recursion
        // FindSum(str1,ptr1-1,str2,ptr2-1,carry,ans);
             
         
}
int main(){
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;
    string ans="";
    int ptr1=str1.length()-1;
    int ptr2=str2.length()-1;
    int carry=0;
    FindSum(str1,ptr1,str2,ptr2,carry,ans);
    cout<<ans;


    return 0;
}