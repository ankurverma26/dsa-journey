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

ListNode *modifiedList(vector<int> &nums, ListNode *head)
{
    unordered_set<int> st;
    for (int i : nums)
        st.insert(i);
    while (head && st.count(head->val))
        head = head->next;
    ListNode *temp = head;
    ListNode *prev = nullptr;
    while (temp)
    {
        if (st.count(temp->val))
            prev->next = temp->next;
        else
            prev = temp;
        temp = temp->next;
    }
    return head;
}