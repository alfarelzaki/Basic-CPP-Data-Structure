#include <iostream>
using namespace std;

class BST{
    private:
    struct tree_node{
        tree_node* left;
        tree_node* right;
        int data;
    };

    tree_node* root;

    public:
    BST(){
        root = NULL;
    }

    bool isEmpty() const { return root==NULL; }
    void print_preorder();
    void print_postorder();
    void print_inorder();
    void preorder(tree_node*);
    void postorder(tree_node*);
    void inorder(tree_node*);
    void insert(int);
    void find(int);
    bool find(tree_node*,int);
    void print_terkecil();
    void terkecil(tree_node*);
    void print_terbesar();
    void terbesar(tree_node*);
    void print_satu();
    void satu(tree_node* p);
};

void BST::insert(int d){
    tree_node* t = new tree_node;
    tree_node* parent;
    t->data = d;
    t->left = NULL;
    t->right = NULL;
    parent = NULL;
    if(isEmpty()) root = t;
    else{
        tree_node* curr;
        curr = root;
        while(curr){
            parent = curr;
            if(t->data > curr->data)
            curr = curr->right;
            else curr = curr->left;
        }
        if(t->data < parent->data) parent->left = t;
        else parent->right = t;
    }
}

void BST::print_preorder(){
    preorder(root);
}

void BST::print_postorder(){
    postorder(root);
}

void BST::print_inorder(){
    inorder(root);
}

void BST::print_terkecil(){
    terkecil(root);
}

void BST::print_terbesar(){
    terbesar(root);
}

void BST::print_satu(){
    satu(root);
}

void BST::preorder(tree_node* p){
    if(p != NULL){
        cout<<" "<<p->data<<" ";
        if(p->left) preorder(p->left);
        if(p->right) preorder(p->right);
    }
    else return;
}

void BST::postorder(tree_node* p){
    if(p != NULL){
        if(p->left) postorder(p->left);
        if(p->right) postorder(p->right);
        cout<<" "<<p->data<<" ";
    }
    else return;
}

void BST::inorder(tree_node* p){
    if(p != NULL){
        if(p->left) inorder(p->left);
        cout<<" "<<p->data<<" ";
        if(p->right) inorder(p->right);
    }
    else return;
}

void BST::find(int n){
    if(find(root,n)==true)
        cout<<" Angka "<<n<<" ada di tree";
    else
        cout<<" Angka "<<n<<" tidak ada di tree";
}
bool BST::find(tree_node* p, int value){
    if(p!=NULL){
        if(value==p->data)
            return true;
        else if(value < p->data){
            p=p->left;
        find(p,value);
        return find(p,value);
        }
        else if(value > p->data){
            p=p->right;
        find(p,value);
        return(p,value);
        }
    }
    else
        return false;
}

void BST::terkecil (tree_node* p){
    if(p!=NULL){
        if(p->left!=NULL)
            terkecil(p->left);
        else
            cout<<" Angka terkecil pada tree adalah "<<p->data<<endl;
    }
    else
        cout<<" Tree kosong\n";
}

void BST::terbesar (tree_node* p){
    if(p!=NULL){
        if(p->right!=NULL)
            terbesar(p->right);
        else
            cout<<" Angka terbesar pada tree adalah "<<p->data<<endl;
    }
    else
        cout<<" Tree kosong\n";
}

void BST::satu(tree_node* p){
    if(p != NULL){
        if( (p->left!=NULL && p->right==NULL) || (p->left==NULL && p->right!=NULL) ){
            cout<<" "<<p->data<<" ";
        }
        if(p->left) satu(p->left);
        if(p->right) satu(p->right);
    }
    else return;
}

int main(){
    BST b;
    int ch,tmp;
        cout<<endl<<endl;
        cout<<" Binary Search Tree Operations "<<endl;
        cout<<" ----------------------------- "<<endl;
        cout<<"1. Insertion/Creation \n2. Pre-Order Traversal \n3. In-Order Traversal \n4. Post-Order Traversal \n5. Search \n6. Terkecil \n7. Terbesar \n8. Satu daun \n0. Exit\n";
        while(1){
        cout<<"\n Masukkan perintah : ";
        cin>>ch;
        switch(ch){
            case 1 : cout<<" Bilangan yang akan dimasukkan : ";
            cin>>tmp;
            b.insert(tmp);
            break;

            case 2 : cout<<endl;
            cout<<" Pre-Order Traversal "<<endl;
            cout<<" -------------------"<<endl;
            b.print_preorder();
            break;

            case 3 : cout<<endl;
            cout<<" In-Order Traversal "<<endl;
            cout<<" -------------------"<<endl;
            b.print_inorder();
            break;

            case 4 : cout<<endl;
            cout<<" Post-Order Traversal "<<endl;
            cout<<" -------------------"<<endl;
            b.print_postorder();
            break;

            case 5 : cout<<" Bilangan yang ingin dicari : ";
            cin>>tmp;
            b.find(tmp);
            break;

            case 6 : cout<<endl;
            cout<<" Bilangan Terkecil "<<endl;
            cout<<" -------------------"<<endl;
            b.print_terkecil();
            break;

            case 7 : cout<<endl;
            cout<<" Bilangan Terbesar "<<endl;
            cout<<" -------------------"<<endl;
            b.print_terbesar();
            break;

            case 8 : cout<<endl;
            cout<<" Bilangan satu leave "<<endl;
            cout<<" -------------------"<<endl;
            b.print_satu();
            break;



            case 0 : return 0;
        }
    }
}
