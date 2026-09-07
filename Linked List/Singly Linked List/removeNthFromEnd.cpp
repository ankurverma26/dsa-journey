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

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    if (head == nullptr || head->next == nullptr)
        return nullptr;
    ListNode *ptr = head;
    int size = 0;
    while (ptr && ptr->next)
    {
        size += 2;
        ptr = ptr->next->next;
    }
    if (ptr != nullptr)
        size++;
    ptr = head;
    int k = size;
    while (k - 1 != n && ptr->next)
    {
        ptr = ptr->next;
        k--;
    }
    if (size == n)
        return head->next;
    ptr->next = ptr->next->next;
    return head;
}