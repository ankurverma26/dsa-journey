#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left, *right;
    Node(int key)
    {
        val = key;
        left = nullptr;
        right = nullptr;
    }
};

Node *buildTree()
{
    int data;
    cin >> data;

    if (data == -1)
    {
        return nullptr;
    }

    Node *root = new Node(data);

    cout << "Enter left child of " << data << " (-1 for null): ";
    root->left = buildTree();

    cout << "Enter right child of " << data << " (-1 for null): ";
    root->right = buildTree();

    return root;
}

int minDepth(Node *root)
{
    if (root == nullptr)
        return 0;
    if (root->left == nullptr)
        return 1 + minDepth(root->right);
    if (root->right == nullptr)
        return 1 + minDepth(root->left);
    return 1 + min(minDepth(root->left), minDepth(root->right));
}

int main(){
    Node* root=buildTree();
    cout<<minDepth(root);
    return 0;
}