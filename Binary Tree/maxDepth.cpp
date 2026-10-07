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

int maxDepth(Node *root)
{
    if (root == nullptr)
        return 0;

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    return 1 + max(left, right);
}

int main(){
    Node* root=buildTree();
    cout<<maxDepth(root);
    return 0;
}
