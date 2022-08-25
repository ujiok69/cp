#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, h, m, ans;
    vector<int> a(n+1);
    cin >> n >> h >> m;
    int t = h*60 + m;
    ans = 1440;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        int q = x*60+y-t;
        if(q < 0){
            q += 1440;
        }
        ans = min(ans, q);
    }
    cout << ans / 60 << " " << ans % 60 << endl;
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
