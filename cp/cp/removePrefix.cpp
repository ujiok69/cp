#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    reverse(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(a[j] == a[i]){
                a.erase(a.begin() + i);
                i++;
                j = i + 1;
            }
        }
    }
    cout << n - a.size() + 1 << endl;
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

