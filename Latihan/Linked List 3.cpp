#include<iostream>
using namespace std;

struct mahasiswa{
    int usia;
    mahasiswa *next;
};

struct linkedList{
    mahasiswa *head; //utama
    mahasiswa *tail;  //opsi
    int count;    //opsi
};

void create(linkedList &L){     //jangan lupa L pakai &
    L.head=NULL;
    L.tail=NULL;
    L.count=0;
}

bool isEmpty(linkedList L){
    if(L.head==NULL){
        return true;
    }else{
        return false;
    }
}

void push(linkedList &L, int usia){     //jangan lupa L pakai &
    mahasiswa *b;
    b=new mahasiswa;
    b->usia=usia;
    if(isEmpty(L)){
        b->next=NULL;
        L.tail=b;
    }else{
        b->next=L.head;
    }

    L.head=b;
    L.count++;
}

void enqueue(linkedList &L, int umur){
	mahasiswa *b;
	b=new mahasiswa;		//memberi alamat
	b->usia=umur;
	b->next = NULL;
	if(isEmpty(L)){
		L.head = b;
		L.tail = b;
		L.count= 1;
	}else{
		L.tail->next= b;
		L.tail=b;
		L.count++;
	}
}

void pop(linkedList &L){        //jangan lupa L pakai &
    if(isEmpty(L)){
        L.head=NULL;
        L.tail=NULL;
        L.count--;
    }else{
        L.head=L.head->next;
        L.count--;
    }
}

void show(linkedList L){
    mahasiswa *p;
    p=L.head;
    while(p!=NULL){
        cout<<p->usia<<endl;     //cetak isi data
        p=p->next;
    }
}


int main(){
    linkedList R;
    create (R);
    int umur;

	cin>>umur;
	while(umur >0){
		enqueue(R,umur);
		cin>>umur;
	}
	
    show(R);
    cout<<endl;
    
    system ("pause");

}
