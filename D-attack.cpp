#include <bits/stdc++.h>
using namespace std;

int main (){
    int a;
    int i, j, k, l;

    cin >> a;

    for (i=1; i<=a-3; i++){
        for (j=1; j<=a-3; j++){
            for (k=1; k<=a-3; k++){
                for (l=1; l<=a-3; l++){
                    if (i+j+k+l==a){
                        cout << i << ' ' << j << ' ' << k << ' ' << l << endl;
                    }
                }
            }
        }
    }
}