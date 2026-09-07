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

ListNode *oddEvenList(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;
    ListNode *startE = head->next;
    ListNode *temp1 = head;
    ListNode *temp2 = head->next;
    while (temp1->next && temp2->next)
    {
        ListNode *nextE = temp2->next->next;
        ListNode *nextO = temp1->next->next;
        temp1->next = nextO;
        temp2->next = nextE;
        temp1 = nextO;
        temp2 = nextE;
    }
    temp1->next = startE;
    return head;
}