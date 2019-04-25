#include <iostream>
using namespace std;

struct node{
    string nama;
    int usia;
    node *left=NULL;
    node *right=NULL;
};

struct tree{
    node *root=NULL;
};

void insert(node *&r, int b, string s){
    if (r==NULL){
        node *baru = new node;
        baru->usia = b;
        baru->nama = s;
        r = baru;
    } else {
        if (b < r->usia){
            insert(r->left, b, s);
        } else if (b >= r->usia){
            insert(r->right, b, s);
        }
    }
}

void ranking(node *r){
    if (r!=NULL){
        ranking(r->right);
        cout << r->nama << "\n";
        ranking(r->left);
    }
}

int main(){
    tree t;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        string s;
        int x;
        cin >> s >> x;
        insert(t.root,x,s);
    }

    ranking(t.root);
}