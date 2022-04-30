#include<bits/stdc++.h>	
using namespace std;

class node{
	    
	    public:
	    node *next=NULL;
	    node*prev=NULL;
	    int data;
	    
	    node(int d){
	        
	        data=d;
	        
	        
	    }
	    
	    void insert(node*&head,node*&tail,int d){
	        
	        node*newnode=new node(d);
	        
	        if(head==NULL){
	            head =tail=newnode;
	            return;
	        }
	        
	        tail->next=newnode;
	        newnode->prev=tail;
	        tail=newnode;
	        
	  //    cout<<"creating"<<newnode->data<<endl;
	        
	    }
	    
	};
	
int main() {
	
node*head=NULL;
node*tail=NULL;
int n;
cin>>n;

int i=n;
while(i>0){
 
 int d;
 cin>>d;
 //cout<<d<<endl;
 
 head->insert(head,tail,d);	//node(head,tail,d) creates a temporary object, whose previous is pointing towards tail. Instead use function.
 
//cout<<head->data<<endl;
//cout<<tail->data<<endl;
    i--;
}

//cout<<head->data<<" "<<tail->data;
//return 0;

while(tail!=head and tail->next!=head and head->prev!=tail){
    
    if(head->data==tail->data){
        head=head->next;
        tail=tail->prev;
    }
    
    else{
        cout<<"false";
       
        return 0; 
        break;
    }
   
}
 cout<<"true";	
}