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
	
	for (int i = 0; i < n-1; i++){
		int min_idx = i;
		for (int j = i+1; j < n; j++){
			ct1++;
			if (arr[j] < arr[min_idx]) min_idx = j;
		}

		if (arr[i]!=arr[min_idx]){
			int temp = arr[i];
			arr[i] = arr[min_idx];
			arr[min_idx] = temp;
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