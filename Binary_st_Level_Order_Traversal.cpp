#include<iostream>
#include<queue>
using namespace std;
struct BstNode
{
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

  return newnode;
}
BstNode *Insert(BstNode *root,int data)
{
  if(root==NULL)
  {
    root=GetNewNode(data);
  }
  else
  if(data<=root->data)
 root->left=Insert(root->left,data);
  else
root->right=Insert(root->right,data);
  return root;
}
bool Search(BstNode*root,int data)
{
  if(root==NULL)
  return false;
  else if(root->data==data)
  return true;
  else if (data<=root->data)
  return Search(root->left,data);
  else return Search(root->right,data);
}
void LevelOrder(BstNode *root)
{
  if(root==NULL)
  return ;
  queue<BstNode *>q;
  q.push(root);
  while(!q.empty())
  {
    BstNode *current=q.front();
    cout<<current->data<<" ";
    if(current->left!=NULL)
    q.push(current->left);
    if(current->right!=NULL)
    q.push(current->right);
    q.pop();
  }
}

int main()
{
  BstNode*root=NULL;
  root=Insert(root,15);
  root=Insert(root,10);
  root=Insert(root,30);
  root=Insert(root,60);
  root=Insert(root,90);
  cout<<"Seacrh_Input"<<endl;
  int j;
  cin>>j;
  if(Search(root,j)==true)
  cout<<"Found_Element"<<endl;
  else cout<<"NO_Such_Element"<<endl;
  cout<<"Level_oreder_Traversal_List"<<endl;
  LevelOrder(root);
}
