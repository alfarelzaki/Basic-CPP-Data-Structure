#include <bits/stdc++.h>
using namespace std;

int jumlah(int a, int b, int c){
    int ans;
    ans = a+b+c;
    return ans;
}

int main(){
    int a1, a2, a3;

    cin>>a1>>a2>>a3;

    int hasil = jumlah(a1, a2, a3);

    cout << hasil << endl;

    return 0;
}