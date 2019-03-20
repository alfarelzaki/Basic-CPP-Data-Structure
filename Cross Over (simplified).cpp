#include <bits/stdc++.h>
using namespace std;

int main (){
    string gen1, gen2, settings, gen3="";
    int i;

    cin >> gen1 >> gen2 >> settings;

    for (i=0; i<gen1.length(); i++){
        if(settings[i]=='1'){
            gen3 += gen2[i];
        } else gen3 += gen1[i];
    }

    cout << gen3 << endl;
}