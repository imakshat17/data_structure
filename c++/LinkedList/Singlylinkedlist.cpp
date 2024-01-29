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
        ~Node(){
              cout<<"deleted"<<endl;;
        }
};
int lengthOfLL(Node* &Head){
     int length=0;
     Node* temp=Head;
     while(temp!=NULL){
         temp=temp->next;
         length++;
     }
     return length;
 }
 void InsertAtHead(Node*& Head,Node* &Tail,int data){
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
 void InsertAtTail(Node* Head,Node* &Tail,int data){
      if(Head==NULL){
         Node* NewNode=new Node(data);
            Head=NewNode;
            Tail=NewNode;
            return;
      }
       Node* NewNode=new Node(data);
       Tail->next=NewNode;
       Tail=NewNode;

 }
 void InsertAtPosition(Node* &Head,Node* &Tail,int position,int data){
         if(position==1){
               InsertAtHead(Head,Tail,data);   
         }
         int len=lengthOfLL(Head);
         if(position>len){
               InsertAtTail(Head,Tail,data);    
         }
         int i=1;
         Node*prev=Head;
         while(i<position-1){
               prev=prev->next;
               i++;
         }
         Node*curr=prev->next;
         Node* NewNode=new Node(data);
        NewNode->next=curr;
        prev->next=NewNode;

 }
 void print(Node* &Head){
        Node* temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
 }
 
Node* ReverseLL(Node* &prev,Node* &curr){
        Node*forward=NULL;
        if(curr==NULL){
             return prev;
        }
        // solve one step;
         forward=curr->next;
         curr->next=prev;
         prev=curr;
         curr=forward;
         ReverseLL(prev,curr);

}
/// delete
void DeleteHead(Node* &Head,Node* &Tail){
      if(Head==NULL){
        cout<<"Sorry can't be deleted";
        return;
      }
      Node* temp=Head;
      Head=temp->next;
      delete temp;
}
void DeleteTail(Node* &Head,Node* &Tail){
        if(Head==NULL){
            cout<<"Sorry can't be deleted";
            return;
        }
        Node* temp=Head;
        int len=lengthOfLL(Head);
        int i=1;
        while(i<len-1){
              temp=temp->next;
              i++;
        }
        Node* temp2=Tail;
        Tail=temp;
        delete temp2;

}
int main(){
    Node* Head=NULL;
    Node* Tail=NULL;
    Node* prev=NULL;
    InsertAtHead(Head,Tail,12);
    InsertAtHead(Head,Tail,11);
    InsertAtHead(Head,Tail,10);
    InsertAtHead(Head,Tail,9);
    InsertAtHead(Head,Tail,8);
    Node* curr=Head;
    print(Head);
    cout<<endl;
    int length=lengthOfLL(Head);
    cout<<length<<endl;
    // Node*head=ReverseLL(prev,curr);
    // print(head);
//    InsertAtTail(Head,Tail,13);
//    print(Head);
//    InsertAtPosition(Head,Tail,3,21);
//    print(Head);
//    InsertAtPosition(Head,Tail,1,0);
//    print(Head);
//    InsertAtPosition(Head,Tail,8,123);
//    print(Head);
print(Head);
cout<<endl;
// DeleteHead(Head,Tail);
// print(Head);
// DeleteHead(Head,Tail);
// print(Head);
DeleteTail(Head,Tail);
print(Head);


    
return 0;
}