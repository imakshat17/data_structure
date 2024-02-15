#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
     int data;
     Node*Left;
     Node*Right;

      Node(int data){
         this->data=data;
         Left=NULL;
         Right=NULL;
      }
};
void LabelOrderTraversal(Node* root){
       queue<Node*>q;
         if(root==NULL){
            return;
         }
          q.push(root);
          q.push(NULL);
           Node* temp=q.front();
            

            

       


}
Node* BuildTree(){
        int data;
        cout<<"Enter the data"<<endl;
        cin>>data;
        if(data==-1){
             return NULL;
        }
        Node* root=new Node(data);
       
         cout<<"Enter data for Left Child"<<data;
           root->Left=BuildTree();
           cout<<"Enter data for Right Child"<<data;
            root->Right=BuildTree();
     return root;
}

int main(){
    Node* root=NULL;
    root=BuildTree();
    
return 0;
}