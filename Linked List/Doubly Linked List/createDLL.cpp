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
    return prev;
}

void printLL(Node* tail){
    Node* temp=tail;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"Enter size of linked list : ";
    cin>>size;
    Node* tail=createDLL(size);
    printLL(tail);
    return 0;
}