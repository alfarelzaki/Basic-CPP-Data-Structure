#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long x, mx=0, y;
    map<int,long long>m;
    while(cin>>x){
        if (x<=0) break;
        m[x]++;
    }
    
    cin>>y;
    cout << m[y] << "\n";

    // system("pause");
}