#include <bits/stdc++.h>
using namespace std;

int data[100], buffer, ct=0;

int getIndexKosong(int awal){
	while(data[awal]!=0){
		awal++;
		if (awal==buffer) awal=0;
	}
	return awal;
}

int getIndex(int id){
	return id % buffer;
}

void penempatan(int id){
	int index = getIndex(id);
	if (ct<buffer){
		if (data[index]==0){
			data[index] = id;
			ct++;
		} else {
			index = getIndexKosong(index);
			data[index] = id;
			ct++;
		}
	}
}

void show(){
	for (int i=0; i<buffer; i++){
		cout << i << ' ' << data[i] << "\n";
	}
	cout << "\n";
}

int main(){
	freopen("../a.in","r",stdin);
	freopen("../a.out","w",stdout);

	int input;
	int n;
	cin >> buffer >> n;
	for (int i=0; i<n; i++){
		cin >> input;
		penempatan(input);
	}
	show();
}