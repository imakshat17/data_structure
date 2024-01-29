#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1){
         return false;
    }
    else{
         for(int i=2;i<n;i++){
             if(n%i==0){
                return false;
             }
         }
    }
    return true;
}
  
int countPrime(int n){
        int c=0;
        for(int i=0;i<n;i++){
               if(isPrime(i)){
                     c++;
               }
        }
        return c;
}
int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    int c=countPrime(n);
    cout<<"Number of prime number is: "<<c<<endl;

return 0;
}