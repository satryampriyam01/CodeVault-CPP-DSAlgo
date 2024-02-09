#include <iostream>
#include <queue>
using namespace std;

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
};



BinaryTreeNode<int>* takeInput() {
    int rootData;
    //cout << "Enter root data : ";
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
        //cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        //cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void preOrder(BinaryTreeNode<int>* root) {
    if(root == NULL) {
        return;
    }
    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
}



BinaryTreeNode<int>* tree(int *input,int si,int eni)
{
    if(si>eni)
        return NULL;
    int rootindex=(si+eni)/2;
   int rootdata=input[rootindex];
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(rootdata);

    BinaryTreeNode<int> *left=tree(input,si,rootindex-1);
    BinaryTreeNode<int> *right=tree(input,rootindex+1,eni);
    root->left=left;
    root->right=right;
    return root;
}


BinaryTreeNode<int>* constructTree(int *input, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    BinaryTreeNode<int>* answer=tree(input,0,n-1);
    return answer;

}


int main() {
    int size;
    cin>>size;
    int *input=new int[1+size];

    for(int i=0;i<size;i++)
        cin>>input[i];

    BinaryTreeNode<int>* root = constructTree(input, size);
    preOrder(root);

}
