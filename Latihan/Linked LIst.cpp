#include <iostream>
using namespace std;


struct kendaraan{
    string noPlat;
    string merk;
    kendaraan *next;
};
struct linkedList{
    kendaraan *head;
    kendaraan *tail;
    int count;
};

void create(linkedList &L){
    L.head=NULL;
    L.tail=NULL;
    L.count=0;
}
bool isEmpty(linkedList L){
    if (L.head==NULL){
        return true;
    } else {
        return false;
    }

}
void pop(linkedList &L){
    if(!isEmpty(L)){
        if(L.head==L.tail){
            L.head=NULL;
            L.tail=NULL;
            L.count--;
        } else {
            L.head=L.head->next;
            L.count--;
        }
    }
}
void push(linkedList &L, string npt, string m){
    kendaraan *b;
    b=new kendaraan;
    b->noPlat=npt;
    b->merk=m;
    if (isEmpty(L)){
        b->next=NULL;
        L.tail=b;
    } else {
        b->next=L.head;
    }
    L.head=b;
    L.count++;
}
show(linkedList L){
    kendaraan *p;
    p=L.head;
    while(p!=NULL){
        cout<<p->noPlat<<p->merk<<endl;
        p=p->next;
    }
}

int main () {

    system("pause");
}
