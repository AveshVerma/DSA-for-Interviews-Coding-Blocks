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
    int n,k;
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

node* mergeLL(node* a, node *b){
    //implement merge sorted ll
    // take two pointers a,b starting at head of lls
    // take a pointer c
    // if a=null ==> return b, and if b=null ==> return a
    //if a->data < b-> data: c=a, c->next = merge(a->next, b)
    // else c=b, c->next = merge(a, b->next)
    //return c
    node* c;
    if(a==NULL){
        return b;
    }
    else if(b==NULL){
        return a;
    }
    if(a->data < b->data){
        c=a;
        c->next = mergeLL(a->next, b);
    } else{
        c = b;
        c->next = mergeLL(a, b->next);
    }

    return c;
}

int main(){
    int t;
    cin >> t;
    while(t--){
    node* head1 = NULL;
    node* head2 = NULL;

    buildList(&head1);
    buildList(&head2);
    node *ans = mergeLL(head1, head2);
    printList(ans);
    cout << endl;
    }
    
    
}
