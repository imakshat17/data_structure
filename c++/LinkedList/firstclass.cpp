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
void insertAtHead(Node* &Head,int data){
    Node* NewNode=new Node(data);
    NewNode->next=Head;
    Head=NewNode;
}
void insertAtTail(Node* &Tail,int data){
    Node* NewNode=new Node(data);
    Tail->next=NewNode;
    Tail=NewNode;
}
void print(Node* &Head){
    Node* temp=Head;
    while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
    }
}
int main(){
    Node* Head=NULL;
    Node* head=new Node(9);
    Node* Tail=head;
    insertAtHead(Head,13);
    insertAtHead(Head,14);
    insertAtHead(Head,15);
    insertAtTail(Tail,10);
    insertAtTail(Tail,11);
    insertAtTail(Tail,12);
    insertAtTail(Tail,13);
    print(head);



    // print(Head);


    
return 0;
}