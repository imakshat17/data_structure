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
Node* reverse(Node* Head){
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
Node* Sum(Node* Head1,Node* Head2){
        Head1=reverse(Head1);
        Head2=reverse(Head2);
            int carry=0;
            Node* ansHead=NULL;
            Node* ansTail=NULL;
            while(Head1!=NULL && Head2!=NULL){
                     int sum=carry+Head1->data+Head2->data;
                     int digit=sum%10;
                      carry=sum/10;
                       Node* temp=new Node(digit);
                         if(ansHead==NULL){
                                ansHead=temp;
                                ansTail=temp;
                         }
                         else{
                               temp->next=ansTail;
                               ansTail=temp;
                         }
                         Head1=Head1->next;
                         Head2=Head2->next;
            }
            while(Head1!=NULL){
                   int sum =carry+Head1->data;
                   int digit=sum%10;
                   carry=sum/10;
                     Node* Newnode=new Node(digit);
                     ansTail->next=Newnode;
                     ansTail=Newnode;
                     Head1=Head1->next;
            }
               while(Head2!=NULL){
                   int sum =carry+Head2->data;
                   int digit=sum%10;
                   carry=sum/10;
                     Node* Newnode=new Node(digit);
                     ansTail->next=Newnode;
                     ansTail=Newnode;
                     Head2=Head2->next;
            }
            while(carry!=0){
                     int sum=carry;
                     int digit=sum%10;
                     carry=sum/10;
                     Node* Newnode=new Node(digit);
                     ansTail->next=Newnode;
                     ansTail=Newnode;
                      
            }
           Node* ans=reverse(ansHead);
            return ans;
}
int main(){

    Node* Head1=new Node(2);
    Node* second1=new Node(3);
    Head1->next=second1;
    Node* Head2=new Node(4);
    Node* second2=new Node(7);
    Head2->next=second2;
    Node* AnsHead=Sum(Head1,Head2);
    print(AnsHead);
    
return 0;
}