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

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == nullptr)
        return list2;
    if (list2 == nullptr)
        return list1;
    ListNode *ans;
    ListNode *temp1 = list1;
    ListNode *temp2 = list2;
    if (list1->val < list2->val)
    {
        ans = list1;
        temp1 = temp1->next;
    }
    else
    {
        ans = list2;
        temp2 = temp2->next;
    }
    ListNode *temp3 = ans;
    while (temp1 && temp2)
    {
        if (temp1->val < temp2->val)
        {
            temp3->next = temp1;
            temp3 = temp1;
            temp1 = temp1->next;
        }
        else
        {
            temp3->next = temp2;
            temp3 = temp2;
            temp2 = temp2->next;
        }
    }
    while (temp1)
    {
        temp3->next = temp1;
        temp3 = temp1;
        temp1 = temp1->next;
    }
    while (temp2)
    {
        temp3->next = temp2;
        temp3 = temp2;
        temp2 = temp2->next;
    }
    temp3->next = nullptr;
    return ans;
}