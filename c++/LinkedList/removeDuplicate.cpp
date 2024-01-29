#include<iostream>
using namespace std;
#include<unordered_map>
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
        if(Head==NULL){
             Node* NewNode=new Node(data);
             Head=NewNode;
             return;
        }
         Node* NewNode=new Node(data);
         NewNode->next=Head;
         Head=NewNode;

}
void removedpunsor(Node* Head){
       if(Head==NULL){
         cout<<"LL is empty";
          return;
     }
unordered_map<int,bool>map;
Node*curr=Head;
Node*prev=NULL;
   while(curr!=NULL && curr->next!=NULL){
           if(map.find(curr->data)!=map.end()){
            //    curr->next=curr->next->next;   
              prev->next=curr->next;
              delete curr;
              curr=prev->next;


           }
           else{
            map[curr->data]=true;
            prev=curr;
            curr=curr->next;
           }
   }
}
void removeDuplicate(Node* Head){
     if(Head==NULL){
         cout<<"LL is empty";
          return;
     }
     Node* curr=Head;
     while(curr!=NULL && curr->next!=NULL){
          if(curr->data==curr->next->data){
             Node* temp=curr->next;
             curr->next=curr->next->next;
             // delete node
              temp->next=NULL;
              delete temp;
             
          }
          else{
            curr=curr->next;
          }
     }
}
void print(Node* head){
     Node* temp=head;
     while(temp!=NULL){
           cout<<temp->data<<" ";
           temp=temp->next;
     }
}
int main(){
    Node* Head=NULL;
    insertAtHead(Head,6);
    insertAtHead(Head,1);
    insertAtHead(Head,2);
    insertAtHead(Head,0);
    insertAtHead(Head,2);
    // print(Head);
    // removeDuplicate(Head);
    removedpunsor(Head);
    print(Head);

    
return 0;
}