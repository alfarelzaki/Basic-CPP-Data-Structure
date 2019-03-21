#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    vector<int>sc;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> x;
        if (x>=0 && x<=100){
            sc.push_back(x);
        }
    }

    for (int i=sc.size()-1; i>=0; i--){
        cout << sc[i] << "\n";
    }

    // system("pause");
}