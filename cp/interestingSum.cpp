#include <bits/stdc++.h>
using namespace std;
  
void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << a[n-1]+a[n-2]-a[0]-a[1]  << endl;    
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

