#include <bits/stdc++.h>
using namespace std;

int main (){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);

    int n, x;
    vector<int>vec; //array dinamis
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> x;
        vec.insert(vec.begin()+vec.size()/2,x);
    }

    for (int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << "\n";

    // system("pause");
}