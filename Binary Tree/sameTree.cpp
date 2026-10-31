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

void traverse(vector<Node *> &arr, Node *root)
{
    arr.push_back(root);
    if (root == nullptr)
        return;
    traverse(arr, root->left);
    traverse(arr, root->right);
}
bool isSameTree(Node *p, Node *q)
{
    vector<Node *> arr1;
    vector<Node *> arr2;
    traverse(arr1, p);
    traverse(arr2, q);
    for (int i = 0; i < arr1.size(); i++)
    {
        if (!arr1[i] && arr2[i])
            return false;
        if (!arr2[i] && arr1[i])
            return false;
        if (arr1[i] && arr2[i] && arr1[i]->data != arr2[i]->data)
            return false;
    }
    return true;
}