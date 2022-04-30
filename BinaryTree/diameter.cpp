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

int height(BTree* root){
    if(root == NULL){
        return 0;
    }
    int lefts = height(root->left);
    int rights = height(root->right);
    return max(lefts, rights)+1;  

}

int diameter(BTree* root){
    if(root == NULL){
        return 0;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);
    int op1 = h1+h2;
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(max(op1, op2), op3);

}

class Pair{
    public:
        int diameter;
        int height;
};

Pair fastDiameter(BTree* root){
    Pair p;
    if(root == NULL){
        p.diameter = p.height = 0;
        return p;
    }

    //otherwise
    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);

    p.height = max(left.height, right.height) + 1;
    p.diameter = max(left.height+right.height, max(left.diameter, right.diameter));
    return p;
}
int main(){
    BTree* root = buildTree();
    Pair ans = fastDiameter(root);
    cout << ans.diameter << " " << ans.height;

}