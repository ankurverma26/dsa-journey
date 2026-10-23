#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int key)
    {
        data = key;
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

void traverse(Node *root, int &ans, int max)
{
    if (root == nullptr)
        return;
    if (root->data >= max)
    {
        ans++;
        max = root->data;
    }
    traverse(root->left, ans, max);
    traverse(root->right, ans, max);
}

int goodNodes(Node *root)
{
    int ans = 0;
    int max = root->data;
    traverse(root, ans, max);
    return ans;
}

int main(){
    Node* root=buildTree();
    cout<<goodNodes(root);
    return 0;
}