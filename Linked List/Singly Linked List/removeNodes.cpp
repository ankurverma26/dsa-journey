#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseLL(ListNode *head)
{
    ListNode *temp = head;
    ListNode *prev = nullptr;
    while (temp)
    {
        ListNode *next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    return prev;
}

ListNode *removeNodes(ListNode *head)
{
    ListNode *list = reverseLL(head);
    ListNode *temp = list->next;
    ListNode *prev = list;
    while (temp)
    {
        if (temp->val >= prev->val)
        {
            prev->next = temp;
            prev = temp;
        }
        temp = temp->next;
    }
    prev->next = nullptr;
    ListNode *ans = reverseLL(list);
    return ans;
}