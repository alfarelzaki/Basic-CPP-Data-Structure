#include <iostream>
using namespace std;

long long fibo(long long x){
	if (x<0) return 0;
	if (x<=1) return x;
    else return fibo(x-1)+fibo(x-2);
}

int main(){
    long long x;
    cin >> x;
    cout << fibo(x) << "\n";
}