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

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *newHead = new ListNode();
    ListNode *temp1 = newHead;
    ListNode *temp2 = l1;
    ListNode *temp3 = l2;
    int carry = 0;
    while (temp2 && temp3)
    {
        int sum = temp2->val + temp3->val + carry;
        carry = 0;
        ListNode *tempNode = new ListNode();
        if (sum > 9)
        {
            tempNode->val = sum - 10;
            carry = sum / 10;
        }
        else
            tempNode->val = sum;
        temp1->next = tempNode;
        temp1 = tempNode;
        temp2 = temp2->next;
        temp3 = temp3->next;
    }
    while (temp2)
    {
        int sum = temp2->val + carry;
        carry = 0;
        ListNode *tempNode = new ListNode();
        if (sum > 9)
        {
            tempNode->val = sum - 10;
            carry = sum / 10;
        }
        else
            tempNode->val = sum;
        temp1->next = tempNode;
        temp1 = tempNode;
        temp2 = temp2->next;
    }
    while (temp3)
    {
        int sum = temp3->val + carry;
        carry = 0;
        ListNode *tempNode = new ListNode();
        if (sum > 9)
        {
            tempNode->val = sum - 10;
            carry = sum / 10;
        }
        else
            tempNode->val = sum;
        temp1->next = tempNode;
        temp1 = temp1->next;
        temp3 = temp3->next;
    }
    if (carry > 0)
    {
        ListNode *tempNode = new ListNode(carry);
        temp1->next = tempNode;
        temp1 = temp1->next;
    }
    temp1->next = nullptr;
    return newHead->next;
}