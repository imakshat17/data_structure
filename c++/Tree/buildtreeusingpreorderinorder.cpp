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
             left=NULL;
             right=NULL;
        } 
};
int Findpostion(int inorder[],int size, int element){
       for(int i=0;i<size;i++){
           if(inorder[i]==element){
            return i;
           }
       }
       return -1;
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
Node* TreeusingInorderPreorder(int inorder[],int preorder[],int size, int &preOrderIndex,int inorderStart, int inorderEnd){
          if(preOrderIndex>=size || inorderStart>inorderEnd){
              return NULL;
          }    
          int element=preorder[preOrderIndex++];
          Node* root=new Node(element);
          int position=Findpostion(inorder,size,element);
          root->left=TreeusingInorderPreorder(inorder,preorder,size,preOrderIndex,inorderStart,position-1);
          root->right=TreeusingInorderPreorder(inorder,preorder,size,preOrderIndex,position+1,inorderEnd);
  return root;
}

int main(){
    int inorder[]={40,20,50,10,60,30,70};
    int preorder[]={10,20,40,50,30,60,70};
    int size=7;
    int preOrderIndex=0;
    int inorderStart=0;
    int inorderEnd=size-1;
    cout<<"Building Tree:-"<<endl;
    Node* root=TreeusingInorderPreorder(inorder,preorder,size,preOrderIndex,inorderStart,inorderEnd);
    cout<<"Printing level order traversal"<<endl;
    LabelOrderTraversal(root);
return 0;
}