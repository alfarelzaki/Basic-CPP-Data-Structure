/*
*author : alfarelzaki
*created : 01.05.2019
*/
#include <bits/stdc++.h>
using namespace std;

int main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

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
		for (int j = 0; j < n-i-1; j++){
			ct1++;
			if (arr[j] > arr[j+1]){
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				ct2++;
			}
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