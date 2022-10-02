#include<bits/stdc++.h>
using namespace std;

void solve(){
    string n;
    cin >> n;
    if(n == "YES" || n == "YEs" || n == "Yes" || n == "yes" || n == "yeS" || n == "yEs" || n == "yES" || n == "YeS"){cout << "yes" << endl;}
    else{cout << "no" << endl;}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}
