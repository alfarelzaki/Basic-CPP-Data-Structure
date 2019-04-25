#include <iostream>
using namespace std;

struct node{
    int angka;
    node *left=NULL;
    node *right=NULL;
};

struct tree{
    node *root=NULL;
};

void insert(node *&r, int b){
    if (r==NULL){
        node *baru = new node;
        baru->angka = b;
        r = baru;
    } else {
        if (b > r->angka){
            insert(r->left, b);
        } else if (b < r->angka){
            insert(r->right, b);
        }
    }
}

int getTinggi(node *r){
    if (r==NULL) return 0;
    else return 1+max(getTinggi(r->right),getTinggi(r->left));
}

int countNode(node *n){
    if (n==NULL) return 0;
    else return 1+countNode(n->left)+countNode(n->right);
}

int sumNode(node *n){
    if (n==NULL) return 0;
    else return n->angka+sumNode(n->left)+sumNode(n->right);
}

void showPreOrder(node *r){
    if (r!=NULL){
        cout << r->angka << ' ';
        showPreOrder(r->left);
        showPreOrder(r->right);
    }
}

void showInOrder(node *r){
    if (r!=NULL){
        showInOrder(r->left);
        cout << r->angka << ' ';
        showInOrder(r->right);
    }
}

void showPostOrder(node *r){
    if (r!=NULL){
        showPostOrder(r->left);
        showPostOrder(r->right);
        cout << r->angka << ' ';
    }
}

int main(){
    tree t;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        insert(t.root,x);
    }

    showPreOrder(t.root);
    cout << "\n";
    showInOrder(t.root);
    cout << "\n";
    showPostOrder(t.root);
    cout << "\n";
}