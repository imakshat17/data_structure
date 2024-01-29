#include<iostream>
using namespace std;
int main(){
// char ch=65;
// cout<<ch;
// int i=65;
// int j=0;
// while(j<10){
//     char ch=i+j;
//      cout<<ch<<" ";
//       j++;
// }
int n;
cin>>n;
for(int i=0;i<n;i++){
     int k=65;
     
     for(int j=0;j<(i+1);j++){
        char ch=k+j;
        cout<<(ch);
     }
    //  cout<<endl;
    for(int el=0;el<i;el++){
        int k=65;
        char ch=k+(i-(1+el));
        cout<<ch;
    }
    cout<<endl;
}


return 0;
}