#include <bits/stdc++.h>
using namespace std;

int n;
bool linearSearch(int x, int arr[]){
	cout << arr.size();
	for (int i=0; i<n; i++){
		if (x==arr[i]) return 1;
	}
	return 0;
}

int main(){
	freopen("../a.in","r",stdin);
	freopen("../a.out","w",stdout);
	
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}

	int y;
	cin >> y;
	linearSearch(y, arr);

	for (int i=0; i<n; i++){
		cout << arr[i] << ' ';
	}
}