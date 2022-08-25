#include<bits/stdc++.h>
using namespace std;
unsigned long long firstDigit(unsigned long long n){
    while (n >= 10)
        n /= 10;
    return n;
}
unsigned long long binpow(unsigned long long a, unsigned long long b) {
    if (b == 0)
        return 1;
    unsigned long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
//sfoh
void solve(){
    unsigned long long x,n;
    cin >> x >> n;
    if(firstDigit(n) == 9){
        unsigned long long y = 0;
        for(unsigned long long i = 0; i < x+1; i++){
            y += binpow(10,i);
        }
        cout << fixed << setprecision(0) << y - n << endl;
    }
    else{
        cout << fixed << setprecision(0) << binpow(10,x)-1-n << endl;
    }
}

int main(){
    unsigned long long t;
    cin >> t;
    for(unsigned long long i = 0; i < t; i++){
        solve();
    }
    return 0;
}
