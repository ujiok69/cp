#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n%3 == 0){
        cout << n / 3 << endl;
    }
    else if(n == 1){
        cout << 2 << endl;
    }
    else{
        cout << n / 3 + 1 << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}
