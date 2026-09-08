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

ListNode *swapPairs(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;
    ListNode *temp = head;
    ListNode *newHead = head->next;
    ListNode *prev = nullptr;
    while (temp && temp->next)
    {
        ListNode *next1 = temp;
        ListNode *next2 = temp->next;
        temp->next = next2->next;
        next2->next = next1;
        if (prev != nullptr)
            prev->next = next2;
        prev = next1;
        temp = next1->next;
    }
    return newHead;
}