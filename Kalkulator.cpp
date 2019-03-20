#include <bits/stdc++.h>
using namespace std;

int main (){
    int a, b, ans, sisa=0;
    string operasi;

    cin >> a >> operasi >> b;
    if (operasi=="kali"){
        ans = a*b;
    } else if (operasi=="bagi"){
        ans = a/b;
        sisa = a%b;
    } else if (operasi=="tambah"){
        ans = a+b;
    }

    if (operasi=="bagi"){
        cout << ans << " sisa " << sisa << endl;
    } else cout << ans << endl;
}