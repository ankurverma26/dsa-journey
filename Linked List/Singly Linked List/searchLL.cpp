#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=nullptr;
    }
};

Node* createLL(int size){
    int firstElement;
    cout<<"Enter element : ";
    cin>>firstElement;
    Node* head=new Node(firstElement);
    Node* temp=head;
    for(int i=0;i<size-1;i++){
        int tempElement;
        cout<<"Enter element : ";
        cin>>tempElement;
        Node* tempNode=new Node(tempElement);
        temp->next=tempNode;
        temp=tempNode;
    }
    return head;
}

bool searchLL(Node* head,int target){
    Node* temp=head;
    while(temp){
        if(temp->val==target) return true;
        temp=temp->next;
    }
    return false;
}

int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;
    Node* head=createLL(size);
    int target;
    cout<<"Enter element to search : ";
    cin>>target;
    int search=searchLL(head,target);
    if(search) cout<<"True";
    else cout<<"False";
    return 0;
}