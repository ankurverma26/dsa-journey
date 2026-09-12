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
    ListNode *dummy = new ListNode(0);
    dummy->next = head;

    ListNode *prev = dummy;
    ListNode *temp = head;

    while (temp)
    {
        if (temp->next && temp->val == temp->next->val)
        {
            int val = temp->val;

            while (temp && temp->val == val)
                temp = temp->next;

            prev->next = temp;
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }

    return dummy->next;
}