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

Node* createLL(int size){
    int data;
    cout<<"Enter element : ";
    cin>>data;
    Node* head=new Node(data);
    Node* mover=head;
    for(int i=0;i<size-1;i++){
        int tempData;
        cout<<"Enter element : ";
        cin>>tempData;
        Node* temp=new Node(tempData);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void printLL(Node* head){
    Node* mover=head;
    while(mover){
        cout<<mover->data<<" ";
        mover=mover->next;
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;
    Node* head=createLL(size);
    printLL(head);
    int element;
    cout<<"Enter element to insert : ";
    cin>>element;
    Node* newElement=new Node(element);
    newElement->next=head;
    head=newElement;
    printLL(head);
    return 0;
}