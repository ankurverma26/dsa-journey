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
        Node* temp=new Node(element);
        temp->prev=prev;
        next->next=temp;
        next=temp;
        prev=temp;
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

void deleteAtEnd(Node* &head){    
    if(head==nullptr) return;

    if(head->next==nullptr){
        delete head;
        head=nullptr;
        return;
    }

    Node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    temp->prev->next=nullptr;
    delete temp;
}

int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;
    Node* head=createDLL(size);
    printLL(head);
    deleteAtEnd(head);
    printLL(head);
    return 0;
}