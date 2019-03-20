#include <bits/stdc++.h>
using namespace std;

struct buku{
	int nomor;
	string judul;
};

struct rak{
	buku data[100];
	int top;
};

void createStack(rak &S){
	S.top = -1;
}

bool isEmpty(rak S){
	if(S.top == -1){
		return true;
	} else return false;
}

bool isFull(rak S){
	if(S.top==99){
		return true;
	} else return false;
}

void push(rak &S, buku b){
	if (isFull(S)){
		cout << "Maaf Pak Penuh" << "\n";
	} else {
		S.top++;
		S.data[S.top] = b;
	}
	
}

void pop(rak &S, buku &x){
	if (isEmpty(S)){
		cout << "Maaf Pak Kosong" << "\n";
	} else {
		x = S.data[S.top];
		S.top--;
	}
}

void showAll(rak &S){
	cout << "Isi rak :" << "\n"; 
	for (int i=S.top, j=1; i>=0; i--, j++){
		cout << "Tumpukan ke " << j << ", " << "Nomor Buku : " << S.data[i].nomor << ", Judul Buku: " << S.data[i].judul << "\n";
	}
}

void showTop(rak &S){
	if(isEmpty(S)){
		cout << "Maaf rak bukunya kosong" << "\n";
	} else cout << S.data[S.top].nomor << ' ' << S.data[S.top].judul << "\n";
}

void ambilPalingBawah(rak &S, buku x){
	if(isEmpty(S)){
		cout << "Maaf rak bukunya kosong, mau ngambil apa gitu kannn" << "\n";
	} else {
		x = S.data[0];
		for (int i=0; i<S.top; i++){
			S.data[i] = S.data[i+1];
		}
		S.top--;
	}
}

int main(){
	rak rak1, rak2, rak3;
	buku buku1, buku2, buku3, x;
	
	buku1.nomor = 1001; buku1.judul = "Rembulan Tenggelam di Wajahmu";
	buku2.nomor = 1002; buku2.judul = "Pulang";
	buku3.nomor = 1003; buku3.judul = "Hujan";
	
	createStack(rak1);
	createStack(rak2);
	createStack(rak3);

	pop(rak1, x);

	for (int i=0; i<100; i++){
		push(rak3,buku1);
	}

	push(rak3,buku2);

	push(rak1,buku2);
	pop(rak1,x);
	push(rak2,x);
	push(rak2,buku3);
	push(rak2,buku1);
	showAll(rak2);
	showAll(rak3);
	showTop(rak1);
	ambilPalingBawah(rak1,x);

	showTop(rak2);
	ambilPalingBawah(rak2, x);
	showAll(rak2);
	
	system("pause");
}
