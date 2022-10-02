#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> q(2*n);
    for(int i = 0; i < n * 2; i++){
        cin >> q[i];
    }
    sort(q.begin(), q.end());
    bool ok = true;
    for(int i = 0; i < n; ++i){
        if(q[n+i] - q[i] < x){
            ok = false;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
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
