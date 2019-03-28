#include <bits/stdc++.h>
using namespace std;

struct buku{
    string nomor;
    string judul;
};

buku arr[100]={};
int top=-1;

void pushatas(string n, string j){
    top++;
    arr[top].nomor = n;
    arr[top].judul = j;
}

void popatas(){
    top--;
}

int main (){
    int n;
    string com, ju, no;
    cin >> n;

    for (int i=0; i<n; i++){
        int x;
        cin >> com;
        if (com=="T"){
            cin >> no >> ju;
            pushatas(no, ju);
        } else {
            popatas();
        }
    }

    for (int i=0; i<=top; i++){
        cout << arr[i].nomor << ' ' << arr[i].judul << "\n";
    }

    system("pause");
}