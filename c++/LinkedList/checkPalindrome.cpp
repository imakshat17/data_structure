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
Node* insertAtHead(Node* Head,Node* Tail,int data){
          Node* newNode = new Node(data);

    if (Head == NULL) {
        // If the list is empty, both Head and Tail should point to the new node
        Head = Tail = newNode;
    } else {
        // Otherwise, update only the Head pointer
        newNode->next = Head;
        Head = newNode;
    }

    return Head;

}
Node* ReverseLL(Node* Head){
        Node* prev=NULL;
        Node* curr=Head;
        while(curr!=NULL){
              Node* forward=curr->next;
              curr->next=prev;
              prev=curr;
              curr=forward;
        }
        return prev;
}
bool checkPalindrome(Node* Head){
    if(Head==NULL){
          return true;
    }
    // if(Head->next=NULL){
    //      return true;
    // }
      Node*slow=Head;
      Node*fast=Head->next;
      while(fast!=NULL){
         fast=fast->next;
           if(fast!=NULL){
              fast=fast->next;
                slow=slow->next;
           }
      }
      Node* ReverseHead=ReverseLL(slow->next);
      slow->next=ReverseHead;
      Node* temp1=Head;
      Node* temp2=ReverseHead;
      while(temp2!=NULL){
           if(temp1->data!=temp2->data){
             return false;
           }
           else{
            temp1=temp1->next;
            temp2=temp2->next;
           }
      }
       
      return true;    
}
void print(Node* Head){
     Node* temp=Head;
     while(temp!=NULL){
           cout<<temp->data<<" ";
           temp=temp->next;
     }
}
int main(){
    Node* Head=NULL;
    Node* Tail=NULL;
     Head=insertAtHead(Head,Tail,1);
     Head=insertAtHead(Head,Tail,2);
     Head=insertAtHead(Head,Tail,2);
     Head=insertAtHead(Head,Tail,1);
    // print(Head);
    // cout<<endl;
    // Node* head=ReverseLL(Head);
    // print(head);
    // bool ans=checkPalindrome(Head);
    // // cout<<ans;
    // if(ans){
    //      cout<<"LinkedList is palindrome";
    // }
    // else{
    //      cout<<"Not palindrome";
    // }
    cout<<(Head->next)->data;
    
return 0;
}