#include <bits/stdc++.h>
using namespace std;

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, s, x, sum=0;
    vector<int>cel;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> s;
        if (s==0){
            cin >> x;
            cel.push_back(x);
        } else if (s==1){\
        
            cin >> x;
            cel.insert(cel.begin(),x);
        } else if (s==2){
            cin >> x;
            cel.erase(cel.end()-1,cel.end());
        } else if (s==3){
            cin >> x;
            cel.erase(cel.begin(), cel.begin()+1);
        }
    }

    for (int i=0; i<cel.size(); i++){
        sum+=cel[i];
    }

    cout << sum << "\n";
    // system("pause");
}