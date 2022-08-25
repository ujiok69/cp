#include <bits/stdc++.h>
using namespace std;
using ll = long long;
      
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += (a[i] > 0);
    }
    for(int i = 0; i < n-1; i++){
        ans -= (a[i] > 0 && a[i+1] > 0);
    }
    ans = min(2,ans);
    cout << ans << "\n";
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
     

