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

		for (int gap = n/2; gap > 0; gap /= 2){ 
			for (int i = gap; i < n; i += 1){ 
				int temp = arr[i], j;
				ct1++;    
				for (j = i; j >= gap && arr[j - gap] > temp; j -= gap){
					ct1++;
					arr[j] = arr[j - gap]; 
				}

				if (temp!=arr[j]){
					ct2++;
					arr[j] = temp;
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