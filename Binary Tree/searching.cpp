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

void preorder(Node *root, int val, Node *&ans)
{
    if (root == nullptr)
        return;
    if (root->data == val)
    {
        ans = root;
        return;
    }
    preorder(root->left, val, ans);
    preorder(root->right, val, ans);
}
Node *searchBST(Node *root, int val)
{
    Node *ans = nullptr;
    preorder(root, val, ans);
    return ans;
}

int main()
{
    Node *root = buildTree();
    int val;
    cout<<"Enter value to search : ";
    cin>>val;
    Node* ans=searchBST(root,val);
    if(ans) cout<<"True";
    else cout<<"False";
    return 0;
}