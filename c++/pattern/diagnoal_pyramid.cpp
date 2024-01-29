#include<iostream>
using namespace std;
int main(){
    for(int row=0;row<5;row++){
         for(int  sp=row;sp<4;sp++){
                cout<<" ";   
         }
                 if(row==0 || row== 4){
                       for(int j=0;j<2*row+1;j++){
                                 cout<<"*";
                       }
                 }
                 
                 else if(row==1){
                    for(int j=0;j<(2*row+1);j++){
                           cout<<"*";
                    }
                 }
                 else{
                     for(int j=0;j<(2*row+1);j++){
                           if(j%row==0){
                              cout<<"*";
                           }
                           else{
                            cout<<" ";
                           }
                    }

                 }
                 cout<<"\n";
    }
      for(int i=0;i<4;i++){

               for(int sp=4-(i+1);sp<4;sp++){
                       cout<<" ";
               }
                  if(i==2 || i==3){
                      for(int j=0;j<(8-(2*i+1));j++){
                       cout<<"*";
                   }
                  }
                  else{
                     if(i==0){
                          for(int j=0;j<(8-(2*i+1));j++){
                       if(j%(3)==0){
                        cout<<"*";
                       }
                       else{
                        cout<<" ";
                       }
                   }
                     }
                      if(i==1){
                          for(int j=0;j<(8-(2*i+1));j++){
                       if(j%(2)==0){
                        cout<<"*";
                       }
                       else{
                        cout<<" ";
                       }
                   }
                     }
                  }
                  cout<<"\n";
      }
return 0;
}