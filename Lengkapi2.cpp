#include <bits/stdc++.h>
using namespace std;

int max (int a, int b, int c){
    int ans;

    if (a>b){
        if (a>c){
            ans = a;
        } else ans = c;
    } else {
        if (b>c){
            ans = b;
        } else ans = c;
    }

    return ans;
}

int main(){

    int a1, a2, a3;

    cin>>a1>>a2>>a3;

    cout << max(a1, a2, a3)<< endl;

    return 0;

}