#include<iostream>
using namespace std;
int main(){
    for(int j=0;j<5;j++){
        for(int sp=j;sp<4;sp++){
            cout<<" ";
        }
        if(j==0 ){
            for(int cl=0;cl<j+1;cl++){
                cout<<"*";
            }
        }
        else if(j==4){
             for(int cl=0;cl<(2*j+1);cl++){
                cout<<"*";
            }
        }
        else{
            for(int cl=0;cl<j+1;cl++){
                if(cl==0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }
    for(int z=0;z<4;z++){
        for(int sp=0;sp<z+1;sp++){
              cout<<" ";
        }
          for(int y=0;y<4-(z);y++){
                  if(y==0){
                    cout<<"*";
                  }
                  else{
                    cout<<" ";
                  }          
          }
          cout<<"\n";
          }
return 0;
}