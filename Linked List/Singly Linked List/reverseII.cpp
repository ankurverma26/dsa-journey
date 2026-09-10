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

ListNode *reverseBetween(ListNode *head, int left, int right)
{
    ListNode *temp = head;
    int count = 1;
    ListNode *leftP1;
    ListNode *leftP2;
    ListNode *rightP;
    ListNode *prev = nullptr;
    while (temp)
    {
        if (count == left)
        {
            leftP1 = prev;
            leftP2 = temp;
        }
        if (count == right)
        {
            rightP = temp;
            break;
        }
        prev = temp;
        count++;
        temp = temp->next;
    }
    ListNode *before = leftP1;
    ListNode *current = leftP2;
    ListNode *after = rightP->next;
    prev = after;
    while (current != after)
    {
        ListNode *temp1 = current->next;
        current->next = prev;
        prev = current;
        current = temp1;
    }
    if (before)
    {
        before->next = prev;
    }
    else
    {
        head = prev;
    }
    return head;
}