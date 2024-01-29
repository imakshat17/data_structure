#include<iostream>
using namespace std;
class Animal{  
public:
 int age;
 string name;
   void eat(){
      cout<<"Eating"<<endl;
   }
   void sleep(){
    cout<<"Sleeing"<<endl; 
   }
};
int main(){
  Animal*Sonu=new Animal;
  Sonu->age=15;
  Sonu->name="aditya";
  cout<<"The age of Sonu is"<<Sonu->age<<endl;
  cout<<"The name of Sonu is"<<Sonu->name<<endl;
  Sonu->sleep();
  Sonu->eat();
return 0;
}