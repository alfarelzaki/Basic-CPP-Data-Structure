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
        if (b < r->angka){
            insert(r->left, b);
        } else if (b > r->angka){
            insert(r->right, b);
        }
    }
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

int getTinggi(node *r){
    if (r==NULL) return 0;
    else return 1+max(getTinggi(r->right),getTinggi(r->left));
}

int getCountLeaf(node *r){
    if (r==NULL) return 0;
    if (r->left==NULL && r->right==NULL) return 1;
    return (getCountLeaf(r->left)+getCountLeaf(r->right));
}

int main(){
    tree t;

    #ifndef ONLINE_JUDGE
        freopen("../a.in","r",stdin);
        freopen("../a.out","w",stdout);
    #endif
}