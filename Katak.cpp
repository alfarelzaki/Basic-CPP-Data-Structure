#include <bits/stdc++.h>
using namespace std;

int main (){
    float a, b;
    int i=0;

    cin >> a >> b;

    while (a>=b){
        a = a/2.0;
        i++;
    }

    cout << i << endl;
}