#include <bits/stdc++.h>
using namespace std;

void solve(){
    unsigned long long n;
    cin >> n;
    vector<unsigned long long> a(n);
    for(unsigned long long i = 0; i < n; i++){
        cin >> a[i];
    }
    unsigned long long p = 0;
    while(p < n && a[p] == 0){
        p++;
    }
    unsigned long long x = 0;
    for(unsigned long long i = p; i < n-1; i++){
        x += a[i];
        if(a[i] == 0){
            x++;
        }
    }
    cout << x << endl;
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

