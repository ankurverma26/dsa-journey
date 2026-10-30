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
vector<vector<int>> levelOrder(Node *root)
{
    vector<vector<int>> ans;
    if (root == nullptr)
        return ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        vector<int> level;
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            if (q.front()->left)
                q.push(q.front()->left);
            if (q.front()->right)
                q.push(q.front()->right);
            level.push_back(q.front()->data);
            q.pop();
        }
        ans.push_back(level);
    }
    return ans;
}