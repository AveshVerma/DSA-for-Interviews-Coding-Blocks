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
    while(n!=-1){
        cin>>n;
        if(n!= -1){
        insertAtTail(head,n);
        }
    }
}

void printList(node*head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    printList(head->next);
}

void kthNode(node* head, int k){
// two pointer approach
// start slow and fast pointer from beginning
// jump fast to k-steps from the slow
// iterate over the array
// when fast reaches null, slow reeaches kth node from end
    node *slow = head;
    node *fast = head;
    while(k>0){
        fast = fast->next;
        k--;
    }
    node *temp = fast;
    while(temp!=NULL){
        slow = slow->next;
        temp = temp->next;
    }
    cout << slow->data;
}

int main(){
    node* head = NULL;
    buildList(&head);
    int k; cin >> k;
    kthNode(head, k);
    //printList(head);
    
}