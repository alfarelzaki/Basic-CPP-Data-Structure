#include <bits/stdc++.h>
using namespace std;

int main (){
	#ifndef ONLINE_JUDGE
		freopen("../a.in","r",stdin);
		freopen("../a.out","w",stdout);
	#endif

	int n, ct1=0, ct2=0;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	for (int i = 1; i < n; i++) { 
		int key = arr[i]; 
		int j = i - 1;
		ct1++;
		while (j >= 0 && arr[j] > key) {
			ct1++;
			ct2++;
			arr[j + 1] = arr[j]; 
			j--; 
		}

		if (key!=arr[j+1]){
			arr[j + 1] = key;
			ct2++;
		}
	}

	cout << "Data terurut : ";
	for (int i=0; i<n; i++){
		cout << arr[i] << ' ';
	}
	cout << "\n";
	cout << "Banyak if : " << ct1 << "\n";
	cout << "Banyak swap : " << ct2 << "\n";
}