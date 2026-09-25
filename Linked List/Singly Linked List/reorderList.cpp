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

void reorderList(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
        return;
    ListNode *temp = head;
    vector<ListNode *> arr;
    while (temp)
    {
        arr.push_back(temp);
        temp = temp->next;
    }
    temp = head;
    for (int i = arr.size() - 1; i >= arr.size() / 2; i--)
    {
        ListNode *next = temp->next;
        temp->next = arr[i];
        temp->next->next = next;
        temp = next;
    }
    if (arr.size() % 2 == 0)
        temp->next = nullptr;
    else
        temp->next->next = nullptr;
}