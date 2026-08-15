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

int lengthLL(Node* head){
    int length=0;
    Node* temp=head;
    while(temp){
        length++;
        temp=temp->next;
    }
    return length;
}

int main(){
    int size;
    cout<<"Enter size of linked list : ";
    cin>>size;
    Node* head=createLL(size);
    cout<<"length of linked list is "<<lengthLL(head);
    return 0;
}