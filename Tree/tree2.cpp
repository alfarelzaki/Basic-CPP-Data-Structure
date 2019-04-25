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
        baru->left = NULL;
        baru->right = NULL;
        r = baru;
    } else {
        if (b < r->angka){
            insert(r->left, b);
        } else if (b > r->angka){
            insert(r->right, b);
        }
    }
}

void showPreOrder(node *r){
    if (r!=NULL){
        showPreOrder(r->left);
        showPreOrder(r->right);
        cout << r->angka << "\n";
    }
}

bool cari(node *r, int x){
    if (r==NULL){
        return false;
    } else if (x==r->angka){
        return true;
    } else {
        return (cari(r->left, x) | cari(r->right, x));
    }
}

int getCountGenap(node *r){
    if (r==NULL){
        return 0;
    } else {
        if (r->angka%2==0) return 1+getCountGenap(r->left)+getCountGenap(r->right);
        else return getCountGenap(r->left)+getCountGenap(r->right);
    }
}

// getTinggi
// getSum
// getCountNode
// getCountLeaf

int main(){
    tree t;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        insert(t.root, x);
    }

    showPreOrder(t.root);
}