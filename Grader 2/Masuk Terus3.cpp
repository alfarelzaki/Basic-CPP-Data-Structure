#include <bits/stdc++.h>
using namespace std;

int main (){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    long long x;
    int y;
    vector<long long>vec;

    while(cin>>x){
        if (x<=0) break;
        vec.push_back(x);
    }
    
    cin >> y;
    y--;
    cout << vec[y] << "\n"; 

    // system("pause");
}