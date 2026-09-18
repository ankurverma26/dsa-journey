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

ListNode *rotateRight(ListNode *head, int k)
{
    if (head == nullptr || head->next == nullptr)
        return head;
    int size = 0;
    ListNode *temp = head;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    k = k % size;
    for (int i = 0; i < k; i++)
    {
        temp = head;
        ListNode *prev = nullptr;
        while (temp->next)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next->next = head;
        head = prev->next;
        prev->next = nullptr;
    }
    return head;
}