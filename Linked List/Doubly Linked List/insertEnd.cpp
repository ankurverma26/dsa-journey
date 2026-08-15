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
    if(size<=0) return nullptr;
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

void printDLL(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtEnd(Node* head,int element){
    Node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    Node* newNode=new Node(element);
    temp->next=newNode;
    newNode->prev=temp;
}

int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;
    Node* head=createDLL(size);
    printDLL(head);
    int element;
    cout<<"Enter element to insert : ";
    cin>>element;
    insertAtEnd(head,element);
    printDLL(head);
    return 0;
}