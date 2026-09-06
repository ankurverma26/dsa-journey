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

bool isPalindrome(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast != nullptr)
    {
        slow = slow->next;
    }
    ListNode *temp = slow;
    ListNode *tail = nullptr;
    while (temp)
    {
        ListNode *next1 = temp->next;
        temp->next = tail;
        tail = temp;
        temp = next1;
    }
    ListNode *first = head;
    ListNode *second = tail;
    while (second)
    {
        if (first->val != second->val)
            return false;
        first = first->next;
        second = second->next;
    }
    return true;
}