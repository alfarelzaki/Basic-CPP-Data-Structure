#include <bits/stdc++.h>
using namespace std;

int arr[100]={}, top=-1;

void pushatas(int x){
    top++;
    arr[top] = x;
}

void pushbawah(int x){
    top++;
    for (int i=top; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = x;
}

void popatas(){
    top--;
}

void popbawah(){
    for (int i=0; i<top; i++){
        arr[i] = arr[i+1];
    }
    top--;
}

int main (){
    int n, com, sum=0;
    cin >> n;

    for (int i=0; i<n; i++){
        int x;
        cin >> com >> x;
        if (com==0){
            pushatas(x);
        } else if (com==1){
            pushbawah(x);
        } else if (com==2){
            popatas();
        } else {
            popbawah();
        }
    }

    for (int i=0; i<=top; i++){
        sum += arr[i];
    }

    cout << sum << "\n";

    system("pause");
}