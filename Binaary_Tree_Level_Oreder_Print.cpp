#include<iostream>
#include "BinaryTreeNode.h"
#include<queue>
using namespace std;


BinaryTreeNode<int>* takeInput()
{
  cout<<"Enter_data"<<endl;
  int rootdata;
  cin>>rootdata;
  if(rootdata==-1)
  return NULL;
  BinaryTreeNode<int> * root=new BinaryTreeNode<int>(rootdata);
  queue<BinaryTreeNode<int>* > pendingNodes;
  pendingNodes.push(root);

  while(pendingNodes.size()!=0)
{
  BinaryTreeNode<int>* front=pendingNodes.front();
  pendingNodes.pop();

  cout<<"Enter_Data_Left_Child_0f"<<front->data<<endl;
  int leftchilddata;
  cin>>leftchilddata;
  if(leftchilddata!=-1)
  {
    BinaryTreeNode<int>* leftchild=new BinaryTreeNode<int>(leftchilddata);
    front->left=leftchild;
    pendingNodes.push(leftchild);
  }

  cout<<"Enter_Data_Right_Child_0f"<<front->data<<endl;
  int rightchilddata;
  cin>>rightchilddata;
  if(rightchilddata!=-1)
  {
    BinaryTreeNode<int>* rightchild=new BinaryTreeNode<int>(rightchilddata);
    front->right=rightchild;
    pendingNodes.push(rightchild);
  }


}
return root;

}





void printBinaryTree(BinaryTreeNode<int> *root)
{
  if(root==NULL)
  return;
  queue<BinaryTreeNode<int>*> pendingNodes;
  pendingNodes.push(root);



  while(pendingNodes.size()!=0)
  {
    BinaryTreeNode<int> *front=pendingNodes.front();
    pendingNodes.pop();
    cout<<front->data<<": ";

    if(front->left!=NULL)
    {
      cout<<"L"<<front->left->data;
      pendingNodes.push(front->left);
    }

    if(front->right!=NULL)
    {
      cout<<" R"<<front->right->data;
      pendingNodes.push(front->right);
    }
cout<<endl;
  }


}

int NumNodes(BinaryTreeNode<int> *root)
{
  if(root==NULL)
  return 0;
  return 1+NumNodes(root->left)+NumNodes(root->right);
}

int height(BinaryTreeNode<int> *root)
{
  if(root==NULL)
    return 0;

    return 1+max(height(root->left),height(root->right));
}

int diametre(BinaryTreeNode<int> *root)
{
  if(root==NULL)
  return 0;
  int option1=height(root->left)+height(root->right);
  int option2=diametre(root->left);
  int option3=diametre(root->right);
  return max(option1,max(option2,option3));
}




pair<int,int> heightDiameter(BinaryTreeNode<int> *root)
{
  if(root==NULL)
  {
    pair<int,int> p;
    p.first=0;
    p.second=0;
    return p;
  }
pair<int,int> leftans=heightDiameter(root->left);
pair<int,int> rightans=heightDiameter(root->right);

int lh=leftans.second;
int ld=leftans.first;
int rh=rightans.second;
int rd=rightans.first;


int height=1+max(lh,rh);
int diameter= max(lh+rh,max(ld,rd));
pair<int,int> p;
p.second=height;
p.first=diameter;
return p;

}






void printLevelATNewLine(BinaryTreeNode<int> *root) {
   if(root==NULL)
       return;

    queue<BinaryTreeNode<int> *> pendingNodes;

    pendingNodes.push(root);

    pendingNodes.push(NULL);

    while(pendingNodes.size()!=0)
    {
    	    BinaryTreeNode<int> *front=pendingNodes.front();
        pendingNodes.pop();


       if(front==NULL)
       {
           if(pendingNodes.size()!=0)
           {
           			pendingNodes.push(NULL);
                cout<<endl;continue;//5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -15 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
           }
           else
           break;

       }
cout<<front->data<<" ";


        if(front->left!=NULL)
        pendingNodes.push(front->left);

        if(front->right!=NULL)
        pendingNodes.push(front->right);




    }


}


// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

int main()
{
  BinaryTreeNode<int>* root=takeInput();
  printBinaryTree(root);
  int num=NumNodes(root);
  cout<<"Number_0f_Nodes : "<<num<<endl;
  int height_tree;
  height_tree=height(root);
  cout<<"Height_Tree"<<": "<<height_tree<<endl;
  int diameter;
  diameter=diametre(root);
  cout<<"Max_Diametre"<<": "<<diameter<<endl;
  pair<int, int> p = heightDiameter(root);
  cout << "Diameter: " << p.first << endl;
  cout << "Height: " << p.second << endl;
  printLevelATNewLine(root);
  delete root;
}
