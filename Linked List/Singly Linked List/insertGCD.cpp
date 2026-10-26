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

int GCD(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a%=b;
        }
        else{
            b%=a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}


ListNode *insertGreatestCommonDivisors(ListNode *head)
{
    if (!head)
        return nullptr;
    ListNode *temp = head;
    while (temp->next)
    {
        ListNode *a = new ListNode(GCD(temp->val, temp->next->val));
        a->next = temp->next;
        temp->next = a;
        temp = a->next;
    }
    return head;
}