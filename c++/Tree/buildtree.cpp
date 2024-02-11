#include<iostream>
#include<queue>
using namespace std;
class Node{
      public:
        int data;
        Node*left;
        Node*right;
      Node(int data){
        this->data=data;
      }

};
Node* BuildTree(){
      int data;
      cout<<"Enter Data"<<endl;
      cin>>data;

      if(data==-1){
         return NULL;
      }
    //   step A
        Node*root=new Node(data);
        // step B
        cout<<"Enter data for left child"<<data<<endl;
        root->left=BuildTree();
        // step C
          cout<<"Enter data for right child"<<data<<endl;
        root->right=BuildTree();

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
void InorderTraversal(Node* root){
      if(root==NULL){
         return;
      }
      InorderTraversal(root->left);
      cout<<root->data<<" ";
      InorderTraversal(root->right);
}
void PreOrderTraversal(Node* root){
      if(root==NULL){
        return;
      }
      cout<<root->data<<" ";
      PreOrderTraversal(root->left);
      PreOrderTraversal(root->right);
}
void PostOrderTraversal(Node* root){
      if(root==NULL){
        return;
      }
      PostOrderTraversal(root->left);
      PostOrderTraversal(root->right);
      cout<<root->data<<" ";
}
int height(Node* root){
     if(root==NULL){
        return 0;
     }
    
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        int ans=max(leftHeight,rightHeight)+1;
    
    return ans;
}
int main(){
    Node* root=NULL;
    root=BuildTree();
    LabelOrderTraversal(root);
    cout<<"Height of tree: "<<height(root);
    
return 0;
}