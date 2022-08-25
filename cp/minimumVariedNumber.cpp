#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n < 10){
        cout << n << endl;
    }
    if(9 < n  && n < 18){
        cout << n - 9 << 9 << endl;
    }
    if(17 < n and n < 25){
        cout << n-17 << 89 << endl;
    }
    if(24 < n && n < 31){
        cout << n-24 << 789 << endl;
    }
    if(30 < n && n < 36){
        cout << n-30 << 6789 << endl;
    }
    if(35 < n && n < 40){
        cout << n-35 << 56789 << endl;
    }
    if(n == 40){
        cout << 1456789 << endl;
    }
    if(n == 41){
        cout << 2456789 << endl;
    }
    if(n == 42){
        cout << 3456789 << endl;
    }
    if(n == 43){
        cout << 13456789 << endl;
    }
    if(n == 44){
        cout << 23456789 << endl;
    }
    if(n == 45){
        cout << 123456789 << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        solve();
    }
    return 0;
}
