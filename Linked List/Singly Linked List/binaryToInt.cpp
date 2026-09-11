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

int getDecimalValue(ListNode *head)
{
    ListNode *temp = head;
    int count = -1;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    int ans = 0;
    temp = head;
    while (temp)
    {
        ans += temp->val * pow(2, count);
        count--;
        temp = temp->next;
    }
    return ans;
}