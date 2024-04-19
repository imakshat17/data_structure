#include<iostream>
#include<queue>
using namespace std;
class Node{
     public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
              this->data=data;
              this->left=NULL;
              this->right=NULL;
        }
};
Node* Insert(Node*root,int data){
       if(root==NULL){
            root=new Node(data);
            return root;
       }
       if(root->data>data){
             root->left=Insert(root->left,data);
       }
       else{
         root->right=Insert(root->right,data);
       }
       return root;

}
void LabelOrderTraversal(Node* root){
      queue<Node*>q;
      q.push(root);
      q.push(NULL);
      while(!q.empty()){
          Node* temp=q.front();
          q.pop();
          if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                  q.push(NULL);
            }

          }
          else{
            cout<<temp->data<<" ";
          if(temp->left){
                q.push(temp->left);
          }
          if(temp->right){
            q.push(temp->right);
          }
          }
          
      }
}
void takeInput(Node*&root){
     int data;
     cin>>data;
     while(data!=-1){
            root=Insert(root,data);
            cin>>data;
     }
}

int main(){

    Node* root=NULL;
    cout<<"Enter the data for Node"<<endl;
     takeInput(root);
     cout<<"Level Order tree :---"<<endl;
       LabelOrderTraversal(root);

return 0;
}
