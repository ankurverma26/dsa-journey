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

Node* middleNode(Node* head) {
    int count1=0;
    Node* temp=head;
    while(temp){
        count1++;
        temp=temp->next;
    }
    int mid=(count1/2)+1;
    int count2=0;
    temp=head;
    while(count2<mid-1){
        count2++;
        temp=temp->next;
    }
    return temp;
}

int main(){
    int size;
    cout<<"Enter size of linked list : ";
    cin>>size;
    Node* head=createLL(size);
    Node* middle=middleNode(head);
    cout<<middle->val;
    return 0;
}