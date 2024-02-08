#include <iostream>
#include <queue>
using namespace std;
#include <vector>

template <typename T>
class BinaryTreeNode {
    public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode() {
    	if(left)
       		delete left;
    	if(right)
       		delete right;
    }
};



vector<int>* findPath(BinaryTreeNode<int> *root , int data){

if(root==NULL)
return NULL;
if(root->data==data)
{
  vector<int>* output=new vector<int>();
  output->push_back(root->data);
  return output;
}

vector<int>* leftOutput=findPath(root->left,data);//if left fins the element it will bring all the path with recursion
if(leftOutput!=NULL)
{
  leftOutput->push_back(root->data);//only you have to push root data and return as its the end path
  return leftOutput;
}

vector<int>* rightOutput=findPath(root->right,data);//if left didnot find the element we will go to right and see if it is there or not rescusrion will bring whole right path
if(rightOutput!=NULL)//if we found the eleemnt we just have to add root and return0
{
  rightOutput->push_back(root->data);
  return rightOutput;

}
else return NULL;


}

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
	q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int k;
    cin >> k;
    vector<int> *output = findPath(root, k);
    if(output != NULL) {
        for(int i = 0; i < output -> size(); i++) {
            cout << output -> at(i) << endl;
        }
    }
    delete root;
}
