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
void print(Node* Head){
     Node* temp=Head;
     while(temp!=NULL){
         cout<<temp->data<<" ";
         temp=temp->next;
     }
}
Node* sortALL(Node* Head){
      Node* zeroHead=new Node(-1);
      Node* zeroTail=zeroHead;
      Node* oneHead=new Node(-1);
      Node* oneTail=oneHead;
      Node* twoHead=new Node(-1);
      Node* twoTail=twoHead;
             
              Node* curr=Head;
               while(curr!=NULL){
                      if(curr->data==0){
                          Node*temp=curr;
                          curr=curr->next;
                          temp->next=NULL;
                          
                          // add to zeroTail;
                             zeroTail->next=temp;
                             zeroTail=temp;
                      }
                    else if(curr->data==1){
                          Node*temp=curr;
                          curr=curr->next;
                          temp->next=NULL;
                          
                          // add to zeroTail;
                             oneTail->next=temp;
                             oneTail=temp;
                      }
                      else if(curr->data==2){
                          Node*temp=curr;
                          curr=curr->next;
                          temp->next=NULL;
                          
                          // add to zeroTail;
                             twoTail->next=temp;
                             twoTail=temp;
                      }
               }
               // remove unwanted node

                Node* temp=oneHead;
                oneHead=oneHead->next;
                temp->next=NULL;
                delete temp;

                temp=twoHead;
                twoHead=twoHead->next;
                temp->next=NULL;
                delete temp;

                //link all linked list
                   
                      if(oneHead!=NULL){
                           zeroTail->next=oneHead;
                                if(twoHead!=NULL){
                                     oneTail->next=twoHead;
                                }
                      }
                      else{
                            if(twoHead!=NULL){
                                 zeroTail->next=twoHead;
                            }
                      }
                      temp=zeroHead;
                      zeroHead=zeroHead->next;
                      temp->next=NULL;
                      delete temp;

                      return zeroHead;
}
  
int main(){
    Node* first=new Node(1);
    Node* second=new Node(1);
    Node* third=new Node(1);
    Node* fourth=new Node(1);
    Node* fifth=new Node(0);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    print(first);
    Node* head=sortALL(first);
    // cout<<"out from function";
    cout<<endl;
    print(head);
    
return 0;
}