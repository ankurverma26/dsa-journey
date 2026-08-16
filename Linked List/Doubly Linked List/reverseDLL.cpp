#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node* prev;
    Node(int data){
        val=data;
        next=nullptr;
        prev=nullptr;
    }
};

Node* createDLL(int size){
    int firstElement;
    cout<<"Enter element : ";
    cin>>firstElement;
    Node* head=new Node(firstElement);
    Node* next=head;
    Node* prev=head;
    for(int i=0;i<size-1;i++){
        int element;
        cout<<"Enter element : ";
        cin>>element;
        Node* tempNode=new Node(element);
        tempNode->prev=prev;
        next->next=tempNode;
        prev=tempNode;
        next=tempNode;
    }
    return head;
}

void printLL(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* reverseDLL(Node* head){
    Node* temp1=head;
    Node* tail=head;
    while(temp1){
        if(temp1->next==nullptr) tail=temp1;
        Node* temp2=temp1->next;
        temp1->next=temp1->prev;
        temp1->prev=temp2;
        temp1=temp2;
    }
    return tail;
}

int main(){
    int size;
    cout<<"Enter size of linked list : ";
    cin>>size;
    Node* head=createDLL(size);
    printLL(head);
    head=reverseDLL(head);
    printLL(head);
    return 0;
}