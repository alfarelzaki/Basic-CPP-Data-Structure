#include <bits/stdc++.h>
using namespace std;

struct kendaraan{
    string plat;
    string merk;
    kendaraan *next;
};

struct ll{
    kendaraan *head;
    kendaraan *tail;
    int ct;  
};

void createll(ll &L){
    L.head = NULL;
    L.tail = NULL;
    L.ct = 0;
}

bool isEmpty(ll L){
    if (L.head==NULL) return true;
    else false;
}

void push(ll &L, string x, string y){
    kendaraan *z;
    z->plat = x;
    z->merk = y;
    z->next = NULL;
    L.tail = z;
    if (isEmpty){
        L.head = z;
    }
}

void pop(ll &L, kendaraan x){
    
}

int main(){

    system("pause");
}