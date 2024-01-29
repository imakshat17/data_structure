#include<iostream>
using namespace std;
class Node{
    public:
           int data;
            Node* next=NULL;
        Node(int data){
            this->data=data;
            this->next=next;
        }

};
void print(Node*& Head){
      Node* temp=Head;
      while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
      }
}
int length(Node* &Head){
    int len=0;
    Node* Temp=Head;
    while(Temp!=NULL){
        Temp=Temp->next;
        len++;
    }
    return len;
}
void InsertAtHead(Node* &Head,Node* &Tail,int data){
      if(Head==NULL){
          Node* NewNode=new Node(data);
          Head=NewNode;
          Tail=NewNode;
          return;
      }
       Node* NewNode=new Node(data);
       NewNode->next=Head;
       Head=NewNode;

}
Node* Middle(Node* &Head){
     if(Head==NULL){
          cout<<"Can't find middle"<<endl;
     }
    //  if(Head->next=NULL){
    //     return Head;
    //  }
     // logic
     Node* fast=Head;
     Node* slow=Head;
     while(fast!=NULL && slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
             fast=fast->next;
             slow=slow->next;
        }
     }
      return slow;
}
Node* ReverseByGroup(Node*Head,int k){
      if(Head==NULL){
           cout<<"Empty linked list"<<endl;
      }
      int len=length(Head);
      if(k>len){
            return Head;
      }
      int count=0;
      Node* prev=NULL;
      Node* curr=Head;
      Node* forward=NULL;
      while(count<k){
             forward=curr->next;
             curr->next=prev;
             prev=curr;
             curr=forward;
             count++;

      }
      Head->next=ReverseByGroup(forward,k);
      return prev;
}
int main(){
    Node* Head=NULL;
    Node* Tail=NULL;
    InsertAtHead(Head,Tail,10);
    InsertAtHead(Head,Tail,9);
    InsertAtHead(Head,Tail,8);
    InsertAtHead(Head,Tail,7);
    InsertAtHead(Head,Tail,6);
    //  print(Head);
    // Node* ans=Middle(Head);
    // cout<<endl;
    // cout<<"Middle of LinkedList is:"<<ans->data<<endl;
    print(Head);
    cout<<endl;
    Node*RevHead=ReverseByGroup(Head,2);
    print(RevHead);


    
return 0;
}