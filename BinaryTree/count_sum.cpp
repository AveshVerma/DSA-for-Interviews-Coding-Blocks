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
int countNode(BTree* root, int count){
    if(root== NULL){
        return 0;
    }
    int countLeft = countNode(root->left, count+1);
    int countRight = countNode(root->right,count+1);
    return 1 + countLeft + countRight;
    
}
int main(){
    BTree* root = buildTree();
    cout << "Number of Node: "; 
    int ans =countNode(root, 0); 
    cout << ans << endl;
}