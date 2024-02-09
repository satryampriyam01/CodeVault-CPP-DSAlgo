#include<iostream>
using namespace std;
struct BstNode{
  int data;
  BstNode *left;
  BstNode *right;
};

BstNode *GetNewNode(int data)

  {
    BstNode *newnode=new BstNode;
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data=data;
  }

BstNode *Insert(BstNode*root,int data)
{
  if(root==NULL)
  {
    root=GetNewNode(data);
  }
  else if(root->data>=data)
  root->left=Insert(root->left,data);
  else
  root->right=Insert(root->right,data);
  return root;
}
bool Search(BstNode*root,int data)
{
  if(root==NULL)
  {
    cout<<"NO TREE"<<endl;
    return false;
  }
  else if(root->data=data)
  return true;
  else if(root->data<=data)
  return Search(root->right,data);
  else return Search(root->left,data);
}

int FindHeight(BstNode *root)
{
  if(root==NULL)
  return -1;
  return max(FindHeight(root->left),FindHeight(root->right))+1;
}

int main()
{
  BstNode *root=NULL;
  root=Insert(root,10);
  root=Insert(root,20);
  root=Insert(root,5);
  root=Insert(root,28);
  root=Insert(root,60);
  cout<<"ENTER NUMBER TO BE SEARCHED"<<endl;
  int n;
  cin>>n;
  if(Search(root,n)==true)
  cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  cout<<"MAX HEIGHT OF THE BINARY ST"<<endl;
  int l;
  l=FindHeight(root);
  cout<<l<<endl;

}
