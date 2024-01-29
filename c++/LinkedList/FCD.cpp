#include<iostream>
using namespace std;
class Node{
   public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* &Head){
    Node* temp=Head;
    while(temp!=NULL){
          cout<<temp->data<<" ";
          temp=temp->next;
    }
}
bool FCD(Node* &Head){
      if(Head==NULL){
        cout<<"Emptied linkedlist";
        return false;
      }
      Node* fast=Head;
      Node* slow=Head;
      while(fast!=NULL){
          fast=fast->next;
          if(fast!=NULL){
               fast=fast->next;
               slow=slow->next;
          }
          if(slow==fast){
               cout<<"Found LOOP";
               return true;
          }
      }
      return false;
}
int main(){
    Node*first=new Node(1);
    Node*second=new Node(2);
    Node*third=new Node(3);
    Node*fourth=new Node(4);
    Node*fifth=new Node(5);
    Node*sixth=new Node(6);
    Node*seventh=new Node(7);
    Node*eighth=new Node(8);
    Node*ninth=new Node(9);
    Node*tenth=new Node(10);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;
    eighth->next=ninth;
    ninth->next=second;
     bool ans=FCD(first);
     cout<<ans<<endl;
 
return 0;
}