#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

void printLL(Node* head){
    Node* mover=head;
    while(mover){
        cout<<mover->data<<" ";
        mover=mover->next;
    }
    cout<<endl;
}

void deleteNode(Node* node) {
    node->data=node->next->data;
    node->next=node->next->next;
}

int main(){
    Node* head=new Node(1);
    Node* second=new Node(5);
    Node* third=new Node(8);
    Node* fourth=new Node(9);
    head->next=second;
    second->next=third;
    third->next=fourth;
    printLL(head);
    deleteNode(third);
    printLL(head);
    return 0;
}