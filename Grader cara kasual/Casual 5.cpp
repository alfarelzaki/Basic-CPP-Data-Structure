#include <bits/stdc++.h>
using namespace std;

struct mahasiswa{
    long long usia;
    mahasiswa *next=NULL;
};

mahasiswa *head=NULL, *tail=NULL;
long long ct=0;

bool isEmpty(){
    if(head==NULL) return true;
    else return false;
}

void enq(long long x){
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

void show(int z){
    mahasiswa *p;
    p=head;
    long long ctl=0, cth=0;
    while(p!=NULL){
        if(p->usia<z) ctl++;
        else if (p->usia>z) cth++;    //cetak isi data
        p=p->next;
    }
    cout << ctl << "\n" << cth << "\n";
}

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int y, z;
    while (cin>>y){
        if (y<=0) break;
        enq(y);
    }

    cin >> z;
    show(z);

    // system("pause");
}