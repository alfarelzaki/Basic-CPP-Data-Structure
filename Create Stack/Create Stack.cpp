#include <bits/stdc++.h>
using namespace std;

struct uang{
	int nominal;
	string warna;
};

struct stackUang{
	uang data[8];
	int top;
};

void createStack(stackUang &S){
	S.top = -1;
}

bool isEmpty(stackUang S){
	if (S.top==-1){
		return true;
	} else return false;
}

void push(stackUang &S, uang u){
	S.top++;
	S.data[S.top] = u;
}

void pop(stackUang &S, uang &x){
	x = S.data[S.top];
	S.top--;
}

void show(stackUang S){
	for (int i=S.top; i>=0; i--){
		cout << S.data[i].nominal << "\n";
	}
}

int main(){
	stackUang S1, S2;
	uang u100, u1000, u2000, x;
	
	u100.nominal = 100; u100.warna = "silver";
	u1000.nominal = 1000; u1000.warna = "silver";
	u2000.nominal = 2000; u2000.warna = "abu-abu";
	
	createStack(S1);
	createStack(S2);
	push(S1, u100);
	push(S1, u1000);
	push(S1, u2000);
	show(S1);
	pop(S1,x);
	push(S2,x);
	pop(S1,x);
	push(S2,x);
	pop(S1,x);
	push(S2,x);
	show(S1);
	show(S2);
	return 0;
}

