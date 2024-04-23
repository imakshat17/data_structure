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

Node* findNumber(Node*root,int data){
      if(root==NULL){
         return NULL;
      }
      if(root->data==data){
          return root;
      }

      if(data>root->data){
             return findNumber(root->right,data);
      }
      else{
         return findNumber(root->left,data);
      }
      
}

Node* BST(int arr[], int s, int e){
         if(s>e){
             return NULL;
         }
         int mid=(s+e)/2;
         int element=arr[mid];
         Node* root=new Node(element);
         root->left=BST(arr,s,mid-1);
         root->right=BST(arr,mid+1,e);
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
void Inorder(Node* root){
          Node* temp=root;
          if(temp==NULL){
              return;
          }
      Inorder(root->left);
      cout<<root->data<<" ";
      Inorder(root->right);
}
int MinValue(Node* root){
        Node* temp=root;
        if(root==NULL){
             return -1;
        }
        while(temp->left!=NULL){
                temp=temp->left;
        }
        return temp->data;
}
int MaxVal(Node* root){
        Node* temp=root;
        if(root==NULL){
              return -1;
        }
        while(temp->right!=NULL){
              temp=temp->right;
        }
        return temp->data;
}
Node* deleteNode(Node* root,int target){
       
        if(root==NULL){
             return NULL;
        }
        cout<<"Enter for"<<root->data<<" "<<target;
       if(root->data==target){
            // 4 cases
              if(root->left==NULL && root->right==NULL){
                     delete root;
                     return NULL;
              }
              else if(root->left!=NULL && root->right==NULL){
                     Node* child=root->left;
                     delete root;
                     return child;
              }
             else if(root->left==NULL && root->right!=NULL){
                   Node* child=root->right;
                   delete root;
                   return child;
              }
              else {
                     int inorderPost=MaxVal(root->left);
                     root->data=inorderPost;
                     root->left=deleteNode(root->left,inorderPost);
                       return root;


              }

       }
       if(target>root->data){
          root->right=deleteNode(root->right,target);     
       }
       if(target<root->data){
          root->left=deleteNode(root->left,target);     
       }
       return root;

} 





int main(){

//     Node* root=NULL;
//     cout<<"Enter the data for Node"<<endl;
//      takeInput(root);
//      cout<<"Level Order tree :---"<<endl;
//        LabelOrderTraversal(root);
//       //  Node* ans=findNumber(root,3);
//       //  cout<<"Number is present:"<<ans->data<<endl;
      
//       root=deleteNode(root,150);
//       cout<<"Level Order tree :---"<<endl;
//       LabelOrderTraversal(root);
    int arr[]={1,2,3,4,5,6,7,8,9};
    int s=0;
    int e=8;
    Node* root=BST(arr,s,e);
    LabelOrderTraversal(root);


return 0;
}
