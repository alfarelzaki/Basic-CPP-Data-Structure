#include <bits/stdc++.h>
using namespace std;

int main (){
    float a, b;
    int i;

    cin >> a >> b;

    for (i=0; i<b; i++){
        a*=0.75;
    }

    cout << a*1000 << endl;
}