#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Node *copyRandomList(Node *head)
{
    Node *temp = head;
    unordered_map<int, int> mp;
    int i = 0;
    Node *newHead = new Node(0);
    Node *prev = newHead;
    while (temp)
    {
        Node *newNode = new Node(temp->val);
        if (temp->random == nullptr)
            mp[i] = -1;
        else
        {
            Node *start = head;
            int cnt = 0;
            while (start)
            {
                if (temp->random == start)
                {
                    mp[i] = cnt;
                    break;
                }
                cnt++;
                start = start->next;
            }
        }
        prev->next = newNode;
        prev = newNode;
        temp = temp->next;
        i++;
    }
    i = 0;
    newHead = newHead->next;
    temp = newHead;
    while (temp)
    {
        if (mp[i] == -1)
            temp->random = nullptr;
        else
        {
            int cnt = 0;
            Node *start = newHead;
            while (start)
            {
                if (cnt == mp[i])
                {
                    temp->random = start;
                    break;
                }
                cnt++;
                start = start->next;
            }
        }
        i++;
        temp = temp->next;
    }
    return newHead;
}