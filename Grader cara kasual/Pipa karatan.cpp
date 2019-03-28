#include <bits/stdc++.h>
using namespace std;

int arr[1000000]={};
int ct=0;

void pushtengah(int x){
    ct++;
    for (int i=ct; i>=ct/2; i--){
        arr[i] = arr[i-1];
    }
    arr[(ct-1)/2] = x;
}

int main (){

    int n, x;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> x;
        pushtengah(x);
    }

    for (int i=0; i<ct; i++){
        cout << arr[i] << ' ';
    }
    cout << "\n";
    system("pause");
}