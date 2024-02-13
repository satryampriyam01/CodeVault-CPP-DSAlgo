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
  else if (data<=root->data)
  root->left=Insert(root->left,data);
  else
  root->right=Insert(root->right,data);
  return root;
}
bool Search(BstNode *root,int data)
{
  if(root==NULL)
  return false;

  else if(root->data==data)
  return true;

  else if (data<=root->data)
  return Search(root->left,data);

  else
  return Search(root->right,data);
}
int FindMin(BstNode *root)
{
  if(root==NULL)
  {
    cout<<"NO BINANRY ST"<<endl;
    return -1;
  }

  while (root->left!=NULL) {
    root=root->left;
  }
  return root->data;
}
int FindMax(BstNode *root)
{
  if(root==NULL)
  {
    cout<<"NO BINARY ST"<<endl;
    return -1;
  }
  while(root->right!=NULL)
  {
    root=root->right;
  }
  return root->data;
}


int main()
{
  BstNode *root=NULL;
  root=Insert(root,10);
  root=Insert(root,20);
  root=Insert(root,5);
  cout<<"ENTER NUMBER TO BE SEARCHED"<<endl;
  int n;
  cin>>n;
  if(Search(root,n)==true)
  cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
int r;
r=FindMin(root);
cout<<"MINIMUM NUMBEER IN BINARY ST"<<endl;
cout<<r<<endl;
int l;
l=FindMax(root);
cout<<"MAXIMUM NUMBER BINANRY ST"<<endl;
cout<<l<<endl;
}
