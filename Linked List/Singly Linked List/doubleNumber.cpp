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

ListNode *doubleIt(ListNode *head)
{
    if (head->val == 0)
        return head;
    ListNode *temp = head;
    ListNode *prev = nullptr;
    while (temp)
    {
        ListNode *next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    temp = prev;
    int carry = 0;
    ListNode *join;
    while (temp)
    {
        int ans = (2 * temp->val) + carry;
        carry = 0;
        if (ans > 9)
        {
            temp->val = ans % 10;
            carry = ans / 10;
        }
        else
        {
            temp->val = ans;
        }
        if (temp->next == nullptr)
            join = temp;
        temp = temp->next;
    }
    if (carry > 0)
    {
        ListNode *Node = new ListNode(carry);
        join->next = Node;
    }
    temp = prev;
    prev = nullptr;
    while (temp)
    {
        ListNode *next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    return prev;
}