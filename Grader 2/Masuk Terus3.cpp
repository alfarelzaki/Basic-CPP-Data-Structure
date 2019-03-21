#include <bits/stdc++.h>
using namespace std;

int main (){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int x, y;
    vector<int>vec;

    while(cin>>x){
        vec.push_back(x);
        if (x<=0) break;
    }
    
    cin >> y;
    cout << vec[y-1] << "\n"; 

    system("pause");
}