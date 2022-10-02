#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int x = log10(n);
    cout << fixed << setprecision(0) << n - pow(10,x) << endl;

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
