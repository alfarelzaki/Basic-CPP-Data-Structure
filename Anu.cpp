#include <bits/stdc++.h>
using namespace std;

void cari (int a, int *data){
    int i;
    bool ketemu=false;
    cout << data.size();
    for (i=0; i<10; i++){
        if (a==data[i]){
            ketemu = true;
            cout << a << " ditemukan di index ke " << i << endl;
        }
    }

    if (ketemu==false){
        cout << a << " tidak ditemukan\n";
    }
}

int main(){

    int a;

    int data[] = {10, 12, 1, 83, 89, 23, 5, 24, 14, 19};

    cin >> a;

    cari(a, data);

    return 0;

}