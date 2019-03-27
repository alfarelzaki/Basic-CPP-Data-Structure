#include <bits/stdc++.h>
using namespace std;

struct data{
    int nim;
    string nama; 
    data *next; 
};

struct stackll{
    data *top = NULL;
    int count;
};

bool isEmpty(stackll *sl){
    if (s1->top==NULL) return true;
    else false;
}

void push(stackll sl){

}



int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    stackll *s1;
    cout <<  s1->top << "\n";

    cout << isEmpty(*s1) << "\n";
    system("pause");
}