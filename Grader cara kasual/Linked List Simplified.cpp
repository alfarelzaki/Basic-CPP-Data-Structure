#include <bits/stdc++.h>
using namespace std;

struct mahasiswa{
    int usia;
    mahasiswa *next=NULL;
};

mahasiswa *head=NULL, *tail=NULL;
int ct=0;

bool isEmpty(){
    if(head==NULL) return true;
    else return false;
}

void enq(int x){
    mahasiswa *b;
    b = new mahasiswa;
    b->usia = x;
    if(isEmpty()){
        head = b;
        tail = b;
        ct++;
    } else {
        tail->next = b;
        tail = b;
        ct++;
    }
}

void show(){
    mahasiswa *p;
    p=head;
    while(p!=NULL){
        cout<<p->usia<<endl;     //cetak isi data
        p=p->next;
    }
}

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int y;
    while (cin>>y){
        if (y<=0) break;
        enq(y);
    }

    show();

    system("pause");
}