#include<bits/stdc++.h>
using namespace std;

class BTree{
    public:
        int data;
        BTree* left;
        BTree* right;

        BTree(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

BTree* buildTree(){
    int d;
    cin >> d;

    if(d==-1){
        return NULL;
    }
    BTree* root = new BTree(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void printPre(BTree* root){
    if(root== NULL){
        return;
    }
    cout << root->data << " ";
    printPre(root->left);
    printPre(root->right);
    
}
void printIn(BTree* root){
    if(root== NULL){
        return;
    }
    printIn(root->left);
    cout << root->data << " ";
    printIn(root->right);
    
}
void printPost(BTree* root){
    if(root== NULL){
        return;
    }
    printPost(root->left);
    printPost(root->right);
    cout << root->data << " ";
    
}

int height(BTree* root){
    if(root == NULL){
        return 0;
    }
    int lefts = height(root->left);
    int rights = height(root->right);
    return max(lefts, rights)+1;  

}

void printKthLevel(BTree* root, int k){
    if(root == NULL){
        return;
    }
    if(k==1){
        cout << root->data << " ";
        return;
    }

    printKthLevel(root->left, k-1);
    printKthLevel(root->right, k-1);
    return;
}

void printAllLevels(BTree* root){
    int H = height(root);
    for(int i = 1; i < H; i++){
        printKthLevel(root, i);
        cout << endl;
    }
}

void bfs(BTree* root){
    queue<BTree*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        BTree* f = q.front();
        if(f == NULL){
            cout <<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        } else{
            cout << f->data << " ";
            q.pop();
        
        if(f->left!=NULL){
            q.push(f->left);
        }
        if(f->right!=NULL){
            q.push(f->right);
        }
        }
    }
    return;
}
int main(){
    BTree* root = buildTree();
    //8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 
    // cout << "Preorder Traversal: "; printPre(root);cout <<  endl;
    // cout << "InOrder Traversal: "; printIn(root); cout <<  endl;
    // cout << "PostOrder Traversal: "; printPost(root);cout <<  endl; 
    // cout << "Level-Order Traversal (Recursive): "; printAllLevels(root); cout <<  endl;
    cout << "Level-Order Traversal (BFS): "; bfs(root); cout <<  endl;
}