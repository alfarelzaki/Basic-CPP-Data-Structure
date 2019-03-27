#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long x, mx=0, y, sum1=0, sum2=0;
    map<int,long long>m;
    while(cin>>x){
        if (x<=0) break;
        m[x]++;
        mx = max(x,mx);
    }
    cin>>y;

    for (int i=0; i<y; i++){
        sum1 += m[i];
    }

    for (int i=y+1; i<=mx; i++){
        sum2 += m[i];
    }
    
    cout << sum1 << "\n" << sum2 << "\n";

    // system("pause");
}