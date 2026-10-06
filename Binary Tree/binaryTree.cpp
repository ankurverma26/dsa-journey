#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int key){
        data=key;
        left=nullptr;
        right=nullptr;
    }
};

Node* buildTree() {
    int data;
    cin >> data;

    if (data == -1) {
        return nullptr;
    }

    Node* root = new Node(data);

    cout << "Enter left child of " << data << " (-1 for null): ";
    root->left = buildTree();

    cout << "Enter right child of " << data << " (-1 for null): ";
    root->right = buildTree();

    return root;
}

void inorder(Node* root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root==nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" "; 
}

void preorder(Node* root){
    if(root==nullptr) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    Node* root=buildTree();
    cout<<"Inorder\n";
    inorder(root);
    cout<<endl<<"Postorder\n";
    postorder(root);
    cout<<endl<<"Preorder\n";
    preorder(root);
    return 0;
}

