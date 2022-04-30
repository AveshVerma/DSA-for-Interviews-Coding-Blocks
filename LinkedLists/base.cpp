#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    //Constructor 
    node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtTail(node** head,int data){
    node* new_node=new node(data);
    new_node->next=NULL;
    if(*head == NULL){
        *head = new_node; 
        return;
    }
    node *tail = *head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = new_node;
    return;
}

void buildList(node** head){
    int n;
    cin>>n;
    while(n--){
        int data;
        cin>>data;
        insertAtTail(head,data);
    }
}

void printList(node*head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    printList(head->next);
}

int main(){
    node* head = NULL;
    buildList(&head);
    printList(head);
    
}