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
    k=n;
    while(n--){
        int data;
        cin>>data;
        insertAtTail(head,data);
    }
    return k;
}

void printList(node*head){
    if(head == NULL){
        return;
    }
    cout << head->data << " ";
    printList(head->next);
}

node* appendK(node *head, int k, int n){
// n =  length of linked list
// k = k from end
// start node = n-k+1
if(head == NULL){
	return head;
}
if(k>n){
    k = k%n;
}
if(k==0 || k%n==0){
	return head;
}
int x = n-k;
node *prev = NULL;
node *curr = head;
while(curr!=NULL && x>0){
    prev = curr;
    curr = curr->next;
    x--;
}
while(curr->next!= NULL){
    curr= curr->next;   
}
curr->next = head;
head = prev->next;
prev->next = NULL;
return head;
}

int main(){
    node* head = NULL;
    int n = buildList(&head);
    int k;
    cin >> k;
    node* ans = appendK(head,k,n);
    printList(ans);
    
}