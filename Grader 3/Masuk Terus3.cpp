#include <bits/stdc++.h>
using namespace std;

int main (){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    long long x;
    long long y;
    vector<long long>vec;

    while(cin>>x){
        vec.push_back(x);
        if (x<=0) break;
    }
    
    cin >> y;
    y--;
    cout << vec[y] << "\n"; 

    // system("pause");
}