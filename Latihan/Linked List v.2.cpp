#include <bits/stdc++.h>
using namespace std;

struct mahasiswa{
    int usia;
    mahasiswa *next=NULL;
};
mahasiswa *head=NULL, *tail=NULL;
int ct=0;

bool isEmpty(){
    if (head==NULL) return true;
    else false;
}

void push(int x){
    mahasiswa *m;
    m = new mahasiswa;
    m->usia = x;
    if(isEmpty()) {
        head = m;
        tail = m;
        ct++;
    } else {
        tail->next = m;
        tail = m;
        ct++;
    }
}

void show(){
    mahasiswa *itr;
    itr = head;
    while(itr!=NULL){
        cout << itr->usia << "\n";
        itr = itr->next;
    }
}

int main (){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int n;
    while(cin>>n){
        if(n<=0) break;
        push(n);
    }

    show();

    system("pause");
}