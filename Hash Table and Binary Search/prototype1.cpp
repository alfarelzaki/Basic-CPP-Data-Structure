#include <bits/stdc++.h>
using namespace std;

int n, arr[100];
bool isLinearSearch(int x){
	for (int i=0; i<n; i++){
		if (x==arr[i]) return 1;
	}
	return 0;
}

int index(int x){
	for (int i=0; i<n; i++){
		if (x==arr[i]) return i;
	}
	return -1;
}

void insertsion(){
	for (int i=1; i<n; i++){
		int key=arr[i], j = i-1;
		while (j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = key;
	}
}

int binarySearch(int l, int r, int x){
	if (r>=l){
		int mid = l+(r-l)/2;
		if (arr[mid]==x) return mid;
		if (arr[mid]<x) return binarySearch(mid+1, r,x);
		return binarySearch(l, mid-1, x);
	} else return -1;
}

int main(){
	freopen("../a.in","r",stdin);
	freopen("../a.out","w",stdout);
	
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}

	int y;
	cin >> y;
	cout << isLinearSearch(y) << "\n";
	insertsion();
	cout << index(y) << "\n";
	cout << binarySearch(0,n-1,y) << "\n";


	for (int i=0; i<n; i++){
		cout << arr[i] << ' ';
	}
}