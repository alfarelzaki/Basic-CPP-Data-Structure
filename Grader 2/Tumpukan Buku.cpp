#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string x, k, j;
    vector<string>jud;
    vector<string>kod;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> x;
        if (x=="T"){
            cin >> k >> j; 
            kod.push_back(k);
            jud.push_back(j);
        } else if (kod.size()>0){
            kod.erase(kod.end()-1,kod.end());
            jud.erase(jud.end()-1,jud.end());
        }
    }

    for (int i=kod.size()-1; i>=0; i--){
        cout << kod[i] << ' ' << jud[i] << "\n";
    }

    // system("pause");
}