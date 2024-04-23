#include<iostream>
#include<queue>
#include<vector>
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
Node* Insert(Node* root,int data){
       if(root==NULL){
         root=new Node(data);
         return root;
       }
       if(data<root->data){
           root->left=Insert(root->left,data);
       }
       else{
        root->right=Insert(root->right,data);
       }
       return root;
}
void takeInput(Node*&root){
       int data;
       cout<<"Enter data: "<<endl;
       cin >> data;
       while(data!=-1){
            root=Insert(root,data);
            
            cin>>data;
       }
      
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
void Inorder(Node* root,vector<int> &ans){
           if(root==NULL){
             return;
           }
        Inorder(root->left,ans);
        ans.push_back(root->data);
        Inorder(root->right,ans);

       
}
Node* BalanceTree(vector<int> arr,int s, int e){
      if(s>e){
        return NULL;
      }
      int mid=(s+e)/2;
      int element=arr[mid];
      Node* root=new Node(element);
      root->left=BalanceTree(arr,s,mid-1);
      root->right=BalanceTree(arr,mid+1,e);

        return root;
}
int main (){
    Node* root=NULL;
    takeInput(root);
    LabelOrderTraversal(root);
    vector<int> ans;
    Inorder(root,ans);
    int s=0;
    int e=ans.size()-1;
   Node* root1= BalanceTree(ans,s,e);
   cout<<"After converison of BST:"<<endl;
   LabelOrderTraversal(root1);
    

    


     return 0;
}