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

ListNode *deleteDuplicates(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;
    ListNode *temp = head->next;
    ListNode *prev = head;
    while (temp)
    {
        if (prev->val != temp->val)
        {
            prev->next = temp;
            prev = prev->next;
        }
        temp = temp->next;
    }
    prev->next = nullptr;
    return head;
}