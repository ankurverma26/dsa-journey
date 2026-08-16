#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int value){
        val=value;
        next=nullptr;
    }
};

Node* createLL(int size){
    int data;
    cout<<"Enter element : ";
    cin>>data;
    Node* head=new Node(data);
    Node* temp=head;
    for(int i=0;i<size-1;i++){
        int element;
        cout<<"Enter element : ";
        cin>>element;
        Node* tempNode=new Node(element);
        temp->next=tempNode;
        temp=tempNode;
    }
    return head;
}

void printLL(Node* head){
    Node* mover=head;
    while(mover){
        cout<<mover->val<<" ";
        mover=mover->next;
    }
    cout<<endl;
}

Node* reverseList(Node* head) {
    Node* temp = head;
    Node* tail = nullptr;
    while (temp) {
        Node* next1 = temp->next;
        temp->next = tail;
        tail = temp;
        temp = next1;
    }
    return tail;
}

int main(){
    int size;
    cout<<"Enter size of linked list : ";
    cin>>size;
    Node* head=createLL(size);
    printLL(head);
    head=reverseList(head);
    printLL(head);
    return 0;
}