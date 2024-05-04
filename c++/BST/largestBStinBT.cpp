#include<iostream>
#include<queue>
using namespace std;
class Node1{
    int size;
    int max;
    int min;
    bool validBST;
    Node1(int size,int max, int min,bool validBST){
            this->size=size;
            max=max;
            min=min;
            validBST=validBST;
    }
       
};
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
Node1 findBst(Node*root,int &ans){
      if(root==NULL){
           
      }
        
}
int main(){
    
    return 0;
}