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

int buildList(node** head){
    int n,k;
    cin>>n;
    cin>>k;
    while(n--){
        int data;
        cin>>data;
        insertAtTail(head,data);
    }
    return k;
}

node* reverse(node *head, int k){
    int x = k;
    node *curr = head;
    node *prev = NULL;
    node *next = NULL;

    while(curr!= NULL && x>0){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        x--;
    }
    if(next!= NULL){
        head->next = reverse(next, k);
    }

    return prev;
}

void printList(node*head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    printList(head->next);
}

int main() {
    node* head = NULL;
    int k = buildList(&head);
    head=reverse(head,k);
    printList(head);
}