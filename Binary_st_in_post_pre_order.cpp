#include<iostream>
using namespace std;
struct BstNode{
  BstNode *left;
  BstNode *right;
  int data;
};
BstNode *GetNewNode(int data)
{
BstNode *newnode=new BstNode;
newnode->left=NULL;
newnode->right=NULL;
newnode->data=data;
return newnode;
}
BstNode *Insert(BstNode *root,int data)
{
  if(root==NULL)
    {
      root=GetNewNode(data);
    }
    else if(data<=root->data)
    root->left=Insert(root->left,data);
    else root->right=Insert(root->right,data);
return root;
}
bool Search(BstNode *root,int data)
{
  if(root==NULL)
  return false;
  else if(root->data==data)
  return true;
  else if(data<=root->data)
  return Search(root->left,data);
  else
  return Search(root->right,data);
}

void PreOrder(BstNode *root)
{
  if(root==NULL)
  return ;
  cout<<root->data<<endl;;
  PreOrder(root->left);
  PreOrder(root->right);
}
void  PostOrder(BstNode *root)
{
  if(root==NULL)
  return;
  PostOrder(root->left);
  PostOrder(root->right);
  cout<<root->data<<endl;

}
void InOrder(BstNode *root)
{
  if(root==NULL)
  return;
  InOrder(root->left);
  cout<<root->data<<endl;
  InOrder(root->right);
}

int main()
{
  BstNode *root=NULL;
  root=Insert(root,15);
  root=Insert(root,20);
  root=Insert(root,60);
  cout<<"NUMBER TO BE SEARCHED"<<endl;
  int n;
  cin>>n;
  if(Search(root,n)==true)
  cout<<"FOUND"<<endl;
  else cout<<"NO"<<endl;

  cout<<"PREORDER"<<endl;
PreOrder(root);

cout<<"POSTORDER"<<endl;
PostOrder(root);

cout<<"InOrder"<<endl;
InOrder(root);


}
